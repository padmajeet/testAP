#!/bin/bash

echo "going to compile source code!!!! relax"
#g++ src/main.cpp src/AddressBook.cpp src/Member.cpp -o contactlist


cmake .

echo "Finally getting some output???"
echo ""
echo ""

./testAP
#./contactlist

