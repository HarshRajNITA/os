#!/bin/bash

echo "Enter space-separated numbers:"
read -a nums

for n in "${nums[@]}"
do
  echo "Fibonacci series for $n terms:"
  a=0
  b=1
  for (( i=0; i<n; i++ ))
  do
    echo -n "$a "
    fn=$((a + b))
    a=$b
    b=$fn
  done
  echo -e "\n"
done
