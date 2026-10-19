# I Know About a Million Things

## Observation

A move removes either exactly one element, or a non-empty set with an even sum. Only the parity of each element matters, so the solution counts the odd and even elements.

Let `k` be the number of odd elements. If the sum of the whole array is even, the first player can remove everything and win immediately.

## Case n = 1

Moggity removes the only element, and Larpity faces an empty array. **Moggity wins.**

## Case n = 2

- **Both elements have the same parity:** the sum is even, so Moggity removes both and wins.
- **One odd and one even:** the sum is odd, so Moggity can't remove both. Moggity must remove one element, leaving a single element that Larpity removes to win. **Larpity wins.**

## Case n = 3

- **All three odd:** the sum is odd, so the whole array can't be removed. Every move loses:
  - Removing one element leaves two odd elements, and Larpity removes both (even sum).
  - Removing two elements leaves one odd element, and Larpity removes it.

  **Larpity wins.**
- **Any other parity pattern:** Moggity has a winning move. If the array has two odd and one even, Moggity removes the even element, leaving two odd elements. Larpity can remove both, so Moggity should instead remove an odd element, which leaves one odd and one even. Larpity can't remove both, so Moggity wins. If the array has two even and one odd, Moggity removes one even element, leaving one even and one odd. This is a losing position for Larpity. **Moggity wins.**

  If the sum is even, Moggity can also remove all three elements at once.

## Case n ≥ 4

Moggity always wins:

- **Sum is even:** remove the entire array.
- **Sum is odd and both parities are present:** keep one odd and one even element, and remove the other `n - 2` elements. The removed sum is odd minus odd, which is even, so the move is legal. Larpity is left with a mixed pair, which is a losing position.
- **Sum is odd and all elements are odd:** `n` must be odd, and `n ≥ 5`. Remove `n - 3` elements (an even count, so the sum is even), leaving three odd elements. This is the losing position for Larpity from the n = 3 case.

**Complexity:** O(n) time and O(1) extra memory per test case.
