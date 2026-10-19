# D1. Come Be My Friend, Don't Be So Scared (Easy Version)

> **Note:** This problem was upsolved after the contest. I didn't solve it during the contest.

## Observation

Since `m = 0`, no detectors exist yet, so every spot starts with an empty signature (the set of detectors that cover it). We need every spot to end up with a distinct signature. Only one spot can be left with the empty signature, so the answer depends on how many spots we can separate.

The minimum number of detectors is `ceil(n / 2)`. The construction only needs to handle odd `n`:

- If `n` is odd, we place detectors directly and every spot gets a unique signature.
- If `n` is even, we solve the problem for `n - 1` (which is odd), and the last spot `n` is left with no detector covering it. Its empty signature is unique, so it is handled "in the last" position.

## Case n = 1

There is only one spot, so it is already uniquely identified. **Answer: 0 detectors.**

## Case n odd

Let `k = (n + 1) / 2`. Place `k` detectors, where the `i`-th one covers the spots from `i` to `i + k - 1`, for `i = 1` to `k`.

Each new detector shifts one spot to the right, so every spot is covered by a different consecutive group of detectors. For example, with `n = 3`, `k = 2`, the detectors are `[1, 2]` and `[2, 3]`:

- Spot 1 is covered by `{A}`
- Spot 2 is covered by `{A, B}`
- Spot 3 is covered by `{B}`

All three signatures are distinct.

## Case n even

Treat the first `n - 1` spots as an odd case, so `k = n / 2`. Place the same `k` detectors as above, covering only spots `1` to `n - 1`.

Spot `n` is not covered by any detector, so its signature is empty. No other spot has an empty signature, so it is uniquely identified. For example, with `n = 4`, `k = 2`, the detectors are `[1, 2]` and `[2, 3]`:

- Spot 1 is covered by `{A}`
- Spot 2 is covered by `{A, B}`
- Spot 3 is covered by `{B}`
- Spot 4 is covered by `{}`

All four signatures are distinct.

**Complexity:** O(n) time and O(1) extra memory per test case, excluding output.
