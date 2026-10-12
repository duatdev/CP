# Robot Odd Moves

**Time limit per test:** 1 second
**Memory limit per test:** 256 megabytes

You are given a point $(a, b)$ of the integer grid.

A robot is standing at the point $(0, 0)$. The robot may perform the following two-step operation any number of times (possibly zero), where $(x, y)$ denotes the point the robot is standing at:

1. Move one unit up or one unit down: $(x, y) \to (x, y+1)$ or $(x, y) \to (x, y-1)$.
2. Then move one unit to the right: $(x, y) \to (x+1, y)$.

The robot *visits* a point if at some moment it is standing at this point: before the first operation, between the two moves of an operation, or after an operation.

Find the minimum number of operations after which the robot has visited $(a, b)$, or determine that it is impossible.

## Input Format

- Each test contains multiple test cases. The first line contains the number of test cases $t$.
- The only line of each test case contains two integers $a$ and $b$ — the coordinates of the given point.

## Output Format

For each test case, output a single integer — the minimum number of operations after which the robot has visited $(a, b)$, or $-1$ if it is impossible.

## Constraints

```
1 ≤ t ≤ 100
0 ≤ a, b ≤ 1000
```
