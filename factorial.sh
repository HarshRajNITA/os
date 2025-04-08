#!/bin/bash

echo enter a numbner
read num

fact=1

while(( num!=1 ))
do
fact=$((fact*num))
((num--))
done

echo factorial is $fact

