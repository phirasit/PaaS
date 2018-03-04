#!/bin/bash

for f in testcases/*.in; do
	out=${f::-3}.out
	dif=$(./palindrome < $f | diff --strip-trailing-cr - $out)
	echo $(cat $f):$(cat $out) | tr -d '\n'
	if [ "$dif" == "" ]; then
		echo " success"
	else
		echo " fail"
		exit 1
	fi

done
