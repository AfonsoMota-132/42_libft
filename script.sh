#!/bin/bash

FILES=$(find -iname "*.c")

for file in $FILES
do
	echo -n $file " "
	cat $file | grep "#inc"
done
