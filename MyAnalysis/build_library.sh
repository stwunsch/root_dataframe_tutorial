#!/bin/bash

g++ -Wall -fPIC -O3 -shared AnalysisCode.cpp -o libAnalysisCode.so -I$(root-config --incdir) $(root-config --cflags --libs)
