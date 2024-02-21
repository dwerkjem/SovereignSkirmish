#!/bin/bash

# Build the project
echo "Building the project"
cmake -S source -B source/build

# build and make sure there are no errors if there are any errors, stop the script

cmake --build source/build || exit 1
# if -r flag is passed, run the project
if [ "$1" == "-r" ]; then
    echo "Running the project"
    ./source/build/SovereignSkirmish
fi

# if -d flag is passed, debug the project

if [ "$1" == "-d" ]; then
    echo "Debugging the project"
    gdb ./source/build/SovereignSkirmish
fi