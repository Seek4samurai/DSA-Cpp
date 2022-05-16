// ------ Brute force approach ------
#include <bits/stdc++.h>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
    while (A != NULL) {
      ListNode *head = B;
      while (head != NULL) {
        if (A == head) {
          return A;
        }
        head = head->next;
      }
      A = A->next;
    }
    return NULL;
  }
};

int main() { return 0; }
