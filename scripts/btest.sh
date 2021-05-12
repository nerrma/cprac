# !/bin/sh

cd sols
g++ -std=c++11 -O2 -Wall $1 -o a
./a < input.txt > prog_out.txt 

diff prog_out.txt output.txt --ignore-blank-lines
if [ $? = 0 ]; then
	echo "Example test passed!"
fi

