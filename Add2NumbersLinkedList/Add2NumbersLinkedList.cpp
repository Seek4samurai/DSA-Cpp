#include <bits/stdc++.h>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    // if any list is null, return the other
    if (l1 == NULL)
      return l2;
    if (l2 == NULL)
      return l1;

    int carry = 0;

    ListNode *head = NULL; // head variable

    while (l1 != NULL && l2 != NULL) {
      int sum = l1->val + l2->val + carry;
      ListNode *l3 = new ListNode(sum % 10);

      // since we added a new number on front of linked list,
      // we need to change our head
      l3->next = head;
      head = l3;

      carry = sum / 10; // updating carry

      // moving forward in our list
      l1 = l1->next;
      l2 = l2->next;
    }

    // at this point one of the list doesn't exist
    // or have ended, so we just paste the rest of the list
    // if l2 has finished and l1 is still remaining
    while (l1 != NULL) {
      int sum = l1->val + carry;
      ListNode *l3 = new ListNode(sum % 10);

      // since we added a new number on front of linked list,
      // we need to change our head
      l3->next = head;
      head = l3;

      carry = sum / 10; // updating carry

      // moving forward in our list
      l1 = l1->next;
    };

    // if l1 has finished and l2 is still remaining
    while (l2 != NULL) {
      int sum = l2->val + carry;
      ListNode *l3 = new ListNode(sum % 10);

      // since we added a new number on front of linked list,
      // we need to change our head
      l3->next = head;
      head = l3;

      carry = sum / 10; // updating carry

      // moving forward in our list
      l2 = l2->next;
    };

    // if carry is still remaining
    if (carry != NULL) {
      ListNode *l3 = new ListNode(carry);

      // since we added a new number on front of linked list,
      // we need to change our head
      l3->next = head;
      head = l3;
    };

    // Now reverse the final linked list
    ListNode *prev = NULL;
    ListNode *curr = head;

    while (curr != NULL) {
      ListNode *l3 = curr->next;
      curr->next = prev;
      prev = curr;
      curr = l3;
    }
    head = prev;
    return head;
  }
};
