#!/bin/bash

# Check if exactly 5 arguments are passed
if [ $# -ne 5 ]; then
  echo "Usage: $0 num1 num2 num3 num4 num5"
  exit 1
fi

# Sum the numbers
sum=$(( $1 + $2 + $3 + $4 + $5 ))

# Print the result
echo "Sum of the numbers: $sum"
