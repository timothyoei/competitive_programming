#!/bin/bash

# The first command-line argument is accessed with $1
FILENAME="$1"

# Check if the file exists
if [ -f "$FILENAME.cpp" ]; then
  g++ -std=c++17 -O3 -Wall "$1.cpp" -o out && ./out < in.txt

  rm out
else
  echo "File '$FILENAME.cpp' does not exist."
fi
