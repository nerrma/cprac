Solutions to competitive programming problems, I will include links to the problems and what I learned from each one.

<details>
<summary>Script Info</summary>
<br>

**`scrape.py`** Scrapes a Codeforces problem page for input and output data, storing them in input.txt and output.txt. 
- Usage: `python scrape.py <url>`

**`btest.sh`** Builds a given program and compares its output to the output in **`output.txt`**. The program output is stored in **`prog_out.txt`**.
- Usage: `bash btest.sh <filename>`

</details>


Format:
- (Link to problem) - filename
	- What I learned from the problem

### Codeforces
---

- [Word](http://codeforces.com/problemset/problem/59/A) - word.cpp
	- Compiling and submitting C++ submissions in Codeforces 
- [Learn Math](http://codeforces.com/problemset/problem/472/A) - learn_math.cpp
	- Simple problem, just verifying primes.
- [Same Differences](http://codeforces.com/problemset/problem/1520/D) - same_diff.cpp
	- Rearranging formulae in the problem helps, math plays a role in simplifying problems. 
- [Arranging Sheep](http://codeforces.com/problemset/problem/1520/E) - sheep.cpp
	- Prefix sums to represent a greedy method. 
- [Epic Transformation](http://codeforces.com/problemset/problem/1506/D) - epic.cpp
	- Priority queues to represent the maximal (or minimal) elements.
