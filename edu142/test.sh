#!/usr/bin/env bash

echo "Testing problem $1"
for ((i = 1; i <= $2; i++))
do
	echo "Running test $i..."
	./$1 < $i.in > prog_$i.out && diff $i.out prog_$i.out
done
