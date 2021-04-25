#!/bin/bash
echo "Building project..."
g++ -std=c++11 -g Main.cpp Visitor.cpp  -o Program
echo "Created 'Program' executable"
echo "Done!"
