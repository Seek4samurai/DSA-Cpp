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
  ListNode *partition(ListNode *head, int x) {
    ListNode *LH = NULL, *LT = NULL, *MH = NULL, *MT = NULL;

    // traverse the list
    while (head != NULL) {
      if (head->val < x) { // if value is less than x
        // check if list is already initialised or not
        if (LH == NULL) {
          // if it's null we need to update both LH and LT to head
          LH = LT = head;
        } else {
          // if they're already initialised
          // insert at tail
          LT->next = head;
          LT = head;
        }
      } else {
        // check if list is already initialised or not
        if (MH == NULL) {
          // if it's null we need to update both LH and LT to head
          MH = MT = head;
        } else {
          // if they're already initialised
          // insert at tail
          MT->next = head;
          MT = head;
        }
      }
      head = head->next;
    }
    // both Less and More lists are ready
    // now we need to append them
    // but if either of the list is empty, we will just return the other list
    // and won't perform the appending task

    // we need to reset these tail next to NULL so that they won't create cycles
    // in the linked list

    if (LH != NULL && MH == NULL) {
      LT->next = NULL;
      return LH;
    } else if (LH == NULL && MH != NULL) {
      MT->next = NULL;
      return MH;
    } else if (LH != NULL && MH != NULL) {
      // if both lists exists, we need to append the lists
      LT->next = NULL;
      MT->next = NULL;
      LT->next = MH;
      return LH;
    }
    // when list is empty []
    else {
      return NULL;
    }
  }
};
