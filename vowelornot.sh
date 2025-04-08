#!/bin/bash

echo enter a character
read char
case $char in
        [aAeEoOiIuU]) echo $char is vowel;;
        *) echo $char is not a vowel;;
esac
