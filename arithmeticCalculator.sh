#!/bin/bash

echo enter first number
read num1
echo enter second number
read num2
echo enter operations like +, -, *, /, %
read op

case $op in
        +) echo your ans is $((num1+num2));;
        -) echo your ans is $((num1-num2));;
        *) echo your ans is $((num1*num2));;
        /) echo your ans is $((num1/num2));;
        %) echo your ans is $((num1%num2));;
        *) echo invalid operation
esac
