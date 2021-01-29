#include <iostream>
#include <complex>
#include <opencv2/opencv.hpp>
#include "func.hpp"

using namespace std;
using namespace cv;

Mat setImgData(Mat img, int map, int index) {
	img.data[3*(map)+0]=pcolor(index, 0, JET);
	img.data[3*(map)+1]=pcolor(index, 1, JET);
	img.data[3*(map)+2]=pcolor(index, 2, JET);
	return img;
}

int main(void) {
	int i, j, k, n, nx, ny;
	double x, y, r, xRangeStart, xRangeStop, yRangeStart, yRangeStop;
  complex<double> a, z;

  // Params
	nx = 500;
	ny = 500;
	n = 200;
	r = 2.0;
  xRangeStart = -0.7;
  xRangeStop = 0.85;
  yRangeStart = -0.7;
  yRangeStop = 0.85;
  a = complex<double>(-0.38, -0.60);

	Mat image(ny, nx, CV_8UC3);

	for(j = 0; j <= ny; j++) {
		for(i = 0; i <= nx; i++) {
			x = xRangeStart + xRangeStop * (double)i / (double)nx;
			y = yRangeStart + yRangeStop * (double)j / (double)ny;
			z = complex<double>(x, y);

			for(k = 0; k < n; k++) {
				z = z * z + a;
				if(abs(z) > r) break;
			}

			if(k < n) {
				image = setImgData(image, j*nx+i, 255 - k);
			} else {
				image = setImgData(image, j*nx+i, 255);
			}
		}
	}

	imshow("image",image);
 	imwrite("../output/output.bmp", image);
	waitKey(0);

  return 0;
}