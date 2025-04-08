#!/bin/bash

echo "Parent Process ID: $$"

# Simulate fork using a subshell
(
  echo "Child Process: PID = $$"
  echo "Child is sleeping for 2 seconds..."
  sleep 2
  echo "Child Process finished!"
) &

echo "Parent is doing some work..."
sleep 1
echo "Parent Process finished!"

