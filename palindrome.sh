#!/bin/bash
echo enter the number check to palindrome
read num

temp=$num

rev=0

while((temp!=0))
do
lastdigit=$((temp%10))
rev=$((rev*10+lastdigit))
temp=$((temp/10))
done
if((num==rev));then
echo number is palindrome
else
echo number is not palindrome
fi
