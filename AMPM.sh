#!/bin/bash

echo "Enter hours (0–23):"
read hour

echo "Enter minutes (0–59):"
read minute

# Basic input validation
if (( hour < 0 || hour > 23 || minute < 0 || minute > 59 ))
then
  echo "Invalid time entered."
  exit 1
fi

# Use case to determine AM or PM
case $hour in
  0)
    echo "Time is 12:$minute AM"
    ;;
  [1-9]|1[0-1])
    echo "Time is $hour:$minute AM"
    ;;
  12)
    echo "Time is 12:$minute PM"
    ;;
  1[3-9]|2[0-3])
    hour12=$((hour - 12))
    echo "Time is $hour12:$minute PM"
    ;;
esac
