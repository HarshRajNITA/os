#!/bin/bash
echo enter a number
read n
sum=0
for((i=2;i<=n;i=i+2))
do
sum=$((sum+i))
done
echo your ans is $sum
