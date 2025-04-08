#!/bin/bash

# Check if all arguments are passed
if (( $#!=4 )); then
  echo "Usage: $0 <Name> <Age> <VoterID> <Candidate>"
  exit 1
fi

# Read command-line arguments
name=$1
age=$2
voterID=$3
candidate=$4

# Age check
if (( age < 18 )); then
  echo "Sorry $name, you are not eligible to vote. Age must be 18 or above."
  exit 1
fi

# Voter details
echo "---------------------------------"
echo "VOTER DETAILS"
echo "Name     : $name"
echo "Age      : $age"
echo "Voter ID : $voterID"
echo "Voted For: $candidate"
echo "Vote submitted successfully "
echo "---------------------------------"
