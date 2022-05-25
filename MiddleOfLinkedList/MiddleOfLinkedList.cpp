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
  ListNode *middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head->next;

    // traversing linked list
    while (fast && fast->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }

    // in case of even
    if (fast && fast->next == NULL) {
      return slow->next;
    }

    // in case of odd
    return slow;
  };
};

int main() { return 0; };
