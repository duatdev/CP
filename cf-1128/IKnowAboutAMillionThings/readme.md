# C. I Know About a Million Things

**Time limit per test:** 2 seconds
**Memory limit per test:** 256 megabytes

---

## Problem Statement

Moggity and Larpity are playing a game with an array $a_1, a_2, \ldots, a_n$ of positive integers. Moggity moves first, and then the players alternate turns.

On their turn, a player chooses a non-empty set of positions of the array and removes the elements at these positions. Such a move is allowed only if at least one of the following conditions holds:

- exactly one element is removed;
- the sum of the removed elements is even.

A player who cannot make a move loses. In other words, the player who faces an empty array loses.

Determine which player has a winning strategy.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^4$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($1 \le n \le 1\,000\,000$), the length of the array.

The second line of each test case contains $n$ integers $a_1, a_2, \ldots, a_n$ ($1 \le a_i \le 1\,000\,000$), the elements of the array.

It is guaranteed that the sum of $n$ over all test cases does not exceed $1\,000\,000$.

## Output

For each test case, print `Moggity` if Moggity has a winning strategy, and `Larpity` otherwise.

You can output the answer in any case (upper or lower). For example, the strings `MoggIty`, `MOGGITY`, `moggity`, and `mOGGity` will be recognized as a win for Moggity.
