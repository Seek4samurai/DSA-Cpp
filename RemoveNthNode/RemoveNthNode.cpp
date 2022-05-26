#include <bits/stdc++.h>

//   Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    // make 2 pointers at head
    ListNode *one = head;
    ListNode *two = head;

    // while will run n times
    while (n--) {
      // make difference between one and two = n
      two = two->next;
    }

    // when length of list = n
    if (two == NULL) {
      return one->next;
    }

    // run both one and two simultaneously and when two reaches last node
    // that means one = nth node
    while (two->next != NULL) {
      one = one->next;
      two = two->next;
    }

    // once we get NULL at two->next ie. one = nth node
    // now we delete the node
    one->next = one->next->next;
    return head;
  }
};
