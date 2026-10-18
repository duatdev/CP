# A. Hey, It's Me, Souvlakity

**Time limit per test:** 1 second
**Memory limit per test:** 256 megabytes

---

## Problem Statement

Souvlakity and Kalamakity are playing yet another game.

All the integers from $1$ to $n$ have been distributed between the players. The distribution can be represented as a binary string $s$ of size $n$, where $s_i = 1$ if integer $i$ has been given to Souvlakity, and $s_i = 0$ if it has been given to Kalamakity. It is guaranteed that Souvlakity owns at least one integer initially (there exists a $1$ in $s$).

The game will go on for $10^{100}$ turns. The two players play in alternating turns, with Souvlakity playing first.

When it is a player's turn, they must choose exactly one of their integers and give it to the other player. It can be shown that this is always possible under this game's constraints.

After all $10^{100}$ turns are finished, Souvlakity calculates his score as the range of the integers he owns (that is, his score is $\max(S) - \min(S)$, where $S$ is the set of integers he owns). It can be shown that Souvlakity will own at least one integer at the end of the game.

Souvlakity wants to maximize his score, and Kalamakity wants to minimize Souvlakity's score. What is Souvlakity's final score if both players act optimally?

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 100$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($2 \le n \le 100$).

The second line of each test case contains a binary string $s$ of length $n$. It is guaranteed that there exists at least one $1$ in $s$.

## Output

For each test case, on a separate line, output a single integer: Souvlakity's final score after the game ends, if both players act optimally.
