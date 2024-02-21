#!/bin/bash

# Build the project
echo "Building the project"
cmake -S . -B build
cmake --build build

# if -r flag is passed, run the project
if [ "$1" == "-r" ]; then
    echo "Running the project"
    ./build/SovereignSkirmish
fi

# if -d flag is passed, run the project with gdb
if [ "$1" == "-d" ]; then
    echo "Running the project with gdb"
    gdb ./build/SovereignSkirmish
fi
