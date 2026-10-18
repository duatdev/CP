# D1. Come Be My Friend, Don't Be So Scared (Easy Version)

**Time limit per test:** 2 seconds
**Memory limit per test:** 256 megabytes

---

**This is the easy version of the problem. The difference between the versions is that in this version, $m = 0$. You can hack only if you solved all versions of this problem.**

## Problem Statement

You are hiding from the formidable Lord Verity.

There are $n$ possible hiding spots in a row, numbered from $1$ to $n$ from left to right. You can hide in exactly one spot.

In order to find you, Lord Verity can install special detectors. Each detector covers a segment of consecutive spots and reports whether you are hiding in one of the spots in this segment. All detectors are activated simultaneously, so the segments of all detectors must be chosen before any report is known.

Lord Verity already has $m$ detectors; the $i$-th of them covers the spots from $l_i$ to $r_i$. Find the minimum number of additional detectors Lord Verity needs to install so that, wherever you hide, the reports of all detectors are enough to uniquely determine the spot that you are hiding in. You also need to find a way to install them.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^4$). The description of the test cases follows.

The first line of each test case contains two integers $n$ and $m$ ($1 \le n \le 2 \cdot 10^5$, $m = 0$), the number of hiding spots and the number of detectors Lord Verity already has.

The $i$-th of the next $m$ lines contains two integers $l_i$ and $r_i$ ($1 \le l_i \le r_i \le n$), the $i$-th detector covers the spots from $l_i$ to $r_i$.

It is guaranteed that no two given detectors cover the same range of hiding spots.

It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \cdot 10^5$.

## Output

For each test case, first output a single integer $k$, the minimum number of additional detectors.

Then output $k$ lines. The $j$-th of them should contain two integers $u_j$ and $v_j$ ($1 \le u_j \le v_j \le n$), meaning that the $j$-th additional detector covers the hiding spots from $u_j$ to $v_j$.

If there are multiple solutions, print any of them.
