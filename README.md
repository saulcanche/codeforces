# codeforces
A. MEXanized Array

time limit per test

1 second

memory limit per test

256 megabytes

input

standard input

output

standard output

You are given three non-negative integers $$$n$$$, $$$k$$$, and $$$x$$$. Find the maximum possible sum of elements in an array consisting of non-negative integers, which has $$$n$$$ elements, its MEX is equal to $$$k$$$, and all its elements do not exceed $$$x$$$. If such an array does not exist, output $$$-1$$$.

The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

*   The MEX of $$$\[2,2,1\]$$$ is $$$0$$$, because $$$0$$$ does not belong to the array.
*   The MEX of $$$\[3,1,0,1\]$$$ is $$$2$$$, because $$$0$$$ and $$$1$$$ belong to the array, but $$$2$$$ does not.
*   The MEX of $$$\[0,3,1,2\]$$$ is $$$4$$$, because $$$0$$$, $$$1$$$, $$$2$$$ and $$$3$$$ belong to the array, but $$$4$$$ does not.

Input

The first line contains a single integer $$$t$$$ ($$$1 \\leq t \\leq 1000$$$) — the number of test cases. Then follows the description of the test cases.

The only line of each test case contains three integers $$$n$$$, $$$k$$$, and $$$x$$$ ($$$1 \\leq n, k, x \\leq 200$$$).

Output

For each test case, output a single number — the maximum sum of elements in a valid array, or $$$-1$$$, if such an array does not exist.

Example

Input

9

5 3 3

4 7 5

4 2 28

12 10 6

57 51 122

200 1 200

2 2 1

3 2 1

4 7 10

Output

7
-1
57
-1
2007
39800
1
2
-1
