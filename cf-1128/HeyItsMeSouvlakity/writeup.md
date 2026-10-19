# Souvlakity vs Kalamakity

## Strategy

### Case 1: Exactly two `1`s

![Case 1](case1.png)

- **Souvlakity** gives away its lower-indexed `1`.
- **Kalamakity** gives away the `0` closest to the remaining `1`. This is always at distance 1 (adjacent), so the score is always **1**.

### Case 2: More than two `1`s

![Case 2](case2.png)

- **Souvlakity** gives away the **middle** `1`.
- **Kalamakity** must give that same `1` back, and it must lie between the extreme `1`s. If it doesn't, the max/min changes in Kalamakity's favour.
- The final score is simply `max - min` of the initial state.

### Case 3: Exactly one `1`

![Case 3](case3.png)

- **Souvlakity** has only one move: give away its only `1`, which is forced.
- **Kalamakity** can give back any of its `0`s. The final position always has exactly one `1`, so the score is `idx - idx = 0`.<img width="648" height="258" alt="case2" src="https://github.com/user-attachments/assets/4abf2631-8361-4d9e-bbb3-1bafbe23c25c" />
<img width="558" height="236" alt="case3" src="https://github.com/user-attachments/assets/6a51d430-620d-43b1-af18-e2b351e56acc" />
<img width="547" height="244" alt="case1" src="https://github.com/user-attachments/assets/fefa8cce-dd76-4753-9954-b4698ff91cf3" />
