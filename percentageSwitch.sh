#!/bin/bash

echo "Enter marks for Physics:"
read phy

echo "Enter marks for Chemistry:"
read chem

echo "Enter marks for Biology:"
read bio

echo "Enter marks for Mathematics:"
read math

echo "Enter marks for Computer:"
read comp

# Calculate total and percentage
total=$((phy + chem + bio + math + comp))
percentage=$((total / 5))

echo "Total: $total"
echo "Percentage: $percentage%"

# Convert percentage to a 10's digit (e.g., 85 → 8, 73 → 7)
grade_case=$((percentage / 10))

case $grade_case in
  10|9)
    echo "Grade: A"
    ;;
  8)
    echo "Grade: B"
    ;;
  7)
    echo "Grade: C"
    ;;
  6)
    echo "Grade: D"
    ;;
  4|5)
    echo "Grade: E"
    ;;
  *)
    echo "Grade: F"
    ;;
esac
