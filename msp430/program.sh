#!/bin/bash

###############################################
# Script to make project, program device and start program
# Navid Shahrestani, created 12/13/2014
###############################################


if [ "$1" = "" ]; then
    echo ""
    echo " User must provide name of project to build/program"
    echo "     ./program.sh <name_of_project_directory>"
    echo ""
    exit 1
fi


echo "Compiling..."
cd $1
make clean
make
echo "Starting mspdebug..."
mspdebug rf2500
