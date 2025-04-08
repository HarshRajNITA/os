#!/bin/bash

echo "Checking palindrome numbers..."

for num in "$@"
do
  original=$num
  reverse=0

  while (( num > 0 ))
  do
    digit=$(( num % 10 ))
    reverse=$(( reverse * 10 + digit ))
    num=$(( num / 10 ))
  done

  if (( original == reverse )); then
    echo "$original is a Palindrome number"
  else
    echo "$original is NOT a Palindrome number"
  fi
done

