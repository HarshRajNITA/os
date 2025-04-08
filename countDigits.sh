#!/bin/bash
echo enter a number
read num
count=0
while((num!=0))
do
((count++))
num=$((num/10))
done

echo total digit $count
