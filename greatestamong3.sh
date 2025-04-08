#!/bin/bash

echo enter first number
read num1
echo enter second number
read num2
echo enter third number
read num3

if(( num1>num2 && num1>num3 )); then
echo $num1 is greatest
elif(( num2>num1 && num2>num3 )); then
echo $num2 is greatest
elif(( num3>num1 && num3>num2 )); then
echo $num3 is greatest
fi
