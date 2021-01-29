#define HSV        1 /* Hue-saturation-value (HSV)              */
#define HOT        2 /* Black-red-yelow-white                   */
#define GRAY       3 /* Linear gray-scale                       */
#define BONE       4 /* Gray-scale with a tinge of blue         */
#define COPPER     5 /* Linear copper-tone                      */
#define PINK       6 /* Pastel shades of pink                   */
#define WHITE      7 /* All-white color map                     */
#define FLAG       8 /* Alternating red, white, blue, and black */
#define JET        9 /* A variant of HSV                        */
#define PRISM     10 /* Prism color map                         */
#define COOL      11 /* Shades of cyan and magenta              */
#define LINES     12 /* Color map using plot line colors        */
#define COLORCUBE 13 /* Enhanced color-cube color map           */
#define SUMMER    14 /* Shades of green and yellow              */
#define AUTUMN    15 /* Shades of red and yellow                */
#define WINTER    16 /* Shades of blue and green                */
#define SPRING    17 /* Shades of magenta and yellow            */

// pcolor(Y, BGR(0 or 1 or 2), table);
int pcolor(int ix, int ich, int map);