# B. What's the Capital of France?

**Time limit per test:** 1.5 seconds
**Memory limit per test:** 256 megabytes

---

## Problem Statement

Obesity might not know the capital of France, but he does know that France has lots of restaurants.

There are $n$ restaurants in a line. The $i$-th restaurant has rating $a_i$.

Obesity can alter the ratings of the restaurants with his special power. In one operation, Obesity chooses two adjacent restaurants. If they have the same rating, nothing happens. Otherwise, the rating of the lower side is increased by $1$.

Formally, in one operation, he does the following:

- Choose an index $i$ ($1 \le i < n$).
- If $a_i < a_{i+1}$, increase $a_i$ by $1$.
- If $a_i = a_{i+1}$, do nothing.
- If $a_i > a_{i+1}$, increase $a_{i+1}$ by $1$.

The *delicacy* of the restaurants is the value of the [bitwise OR](https://en.wikipedia.org/wiki/Bitwise_operation#OR) of the ratings of all restaurants.

What is the maximum *delicacy* Obesity can achieve after performing zero or more operations?

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^4$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($1 \le n \le 2 \cdot 10^5$).

The second line of each test case contains $n$ integers $a_1, a_2, \ldots, a_n$ ($0 \le a_i \le 10^9$).

It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \cdot 10^5$.

## Output

For each test case, print one integer: the maximum *delicacy* of all restaurants.
