#!/bin/bash

set -eux

g++ -std=c++17 -Wall -pedantic main.cpp -I. -o main
./main > output

TEST_SHA=$(grep '[^ ]\+' output | shasum)

if [[ "387bb06ab96fe631e866620cbf3aa53d54348768  -" == "${TEST_SHA}" ]]
then
  echo "Success"
  rm output
  exit 0
else
  echo "Failed"
  echo ${TEST_SHA}
  rm output
  exit 1
fi
