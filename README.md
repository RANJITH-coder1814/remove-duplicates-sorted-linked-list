# remove-duplicates-sorted-linked-list
Removes duplicate elements from a sorted singly linked list so that each element appears only once.
# 🔗 Remove Duplicates from Sorted Linked List

This project removes duplicate elements from a **sorted singly linked list**.

## 🧠 Problem Statement
Given a sorted linked list, delete all duplicates such that each element appears only once.

## 🚀 Approach
- Traverse the list using a pointer
- Compare current node with next node
- If duplicate found, skip the next node

## 💻 Technologies
- C++

## ▶️ How to Run
1. Clone the repository
2. Compile:
   g++ main.cpp
3. Run:
   ./a.out

## 📈 Complexity
- Time: O(n)
- Space: O(1)

## 📌 Example
Input:
1 -> 1 -> 6 -> 8 -> 8

Output:
1 -> 6 -> 8
