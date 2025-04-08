#!/bin/bash

echo enter the number that you want to find the table
read num

for((i=1;i<=10;i++))
do
echo $((num*i))
done
