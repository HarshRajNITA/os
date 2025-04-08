#!/bin bash

echo enter a number
read num

if (( num%2==0 )); then
echo Number is even
else
echo Number is odd
fi
