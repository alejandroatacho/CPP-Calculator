#!/bin/bash
g++ main.cpp -o main
mv main.exe output/
cd output
./main
cd ..
$SHELL

