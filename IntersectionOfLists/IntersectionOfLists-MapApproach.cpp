// ------ Map approach ------
#include <iostream>
#include <unordered_map>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
    std::unordered_map<ListNode *, bool> myMap;
    while (B != NULL) {
      myMap[B] = true;
      B = B->next;
    }
    while (A != NULL) {
      if (myMap.count(A))
        return A;
      A = A->next;
    }
    return NULL;
  }
};

int main() { return 0; }
