#!/bin/bash

echo "Enter a number"
read n

count=1

while (( count <= n ))
do
  echo "Number is $count"
  ((count++))
done
