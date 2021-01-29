#!/bin/sh
chmod 755 dev.sh
cd build && cmake ../ && make && ./opencv-dev

