#!/bin/bash

set -eux

g++ -std=c++17 -Wall -pedantic main.cpp -I. -o main
./main > output

TEST_SHA=$(cat output | shasum)

if [[ "368846b880bc123e6c380acea0ad27d0b7e0512e  -" == "${TEST_SHA}" ]]
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
