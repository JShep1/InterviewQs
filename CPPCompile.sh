#!/bin/bash

cpplint $1.cpp
g++ -g -o $1 $1.cpp
./$1
