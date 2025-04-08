#!/bin/bash

# Check if exactly 2 arguments are given
if (( $#!=2 )); then
  echo "Usage: $0 <string1> <string2>"
  exit 1
fi

# Store the arguments
str1=$1
str2=$2

# Concatenate the strings
result="$str1$str2"

# Output the result
echo "Concatenated string: $result"
