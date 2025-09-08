#!/bin/bash

# Code formatter for codebase using clang-format
# For formatting specs, view the file /.clang-format in root directory

clang-format -i **/*.cpp **/*.hpp
