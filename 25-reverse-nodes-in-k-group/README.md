# 25. Reverse Nodes in k-Group

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)
![Status](https://img.shields.io/badge/Solved-Yes-brightgreen)

---

## 🧩 Problem Statement

Given the **head** of a linked list, reverse the nodes of the list **k at a time**, and return the **modified list**.

- `k` is a positive integer and is less than or equal to the length of the linked list.
- If the number of nodes is not a multiple of `k`, the remaining nodes should remain as they are.
- You may **not** alter the values in the list’s nodes, only the **node links** may be changed.

---

## 📌 Example 1

![Example 1](assets/example1.png)

```text
Input:  head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]