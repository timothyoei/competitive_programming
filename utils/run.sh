#!/bin/bash

g++ -std=c++17 -O3 -Wall main.cpp -o out && ./out < in.txt

rm out