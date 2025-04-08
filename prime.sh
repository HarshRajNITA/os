#!/bin/bash
echo  enter a number
read num

is_prime=1  # assume it's prime

for ((i=2; i<=num/2; i++))
do
  if (( num % i == 0 ))
  then
    is_prime=0
    break
  fi
done

if((is_prime==0)); then
echo number is not prime
else
echo number is prime
fi
