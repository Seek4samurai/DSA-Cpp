// ------ Length approach ------
#include <bits/stdc++.h>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  // function to count the length of list
  int length(ListNode *head) {
    int count = 0;
    while (head != NULL) {
      count++;
      head = head->next;
    }
    return count;
  }

  ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
    int m = length(A);
    int n = length(B);

    int difference = abs(m - n); // difference is always positive
    if (m > n)
      std::swap(A, B); // we assume B is bigger List than A, so if in case A is
                       // bigger we swap it with B

    for (int i = 0; i < difference; i++) {
      B = B->next;
    }
    // Both A and B are equidistant from intersection point

    while (A != NULL && B != NULL) {
      if (A == B)
        return A;

      A = A->next;
      B = B->next;
    }
    return NULL; // No intersection found!
  }
};

int main() { return 0; }
