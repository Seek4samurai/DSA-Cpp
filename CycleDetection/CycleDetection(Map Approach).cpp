#include <iostream>
#include <unordered_map>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  bool hasCycle(ListNode *head) {
    std::unordered_map<ListNode *, bool> myMap;
    while (head != NULL) {
      if (myMap.count(head)) {
        return true;
      }
      myMap[head] = true;
      head = head->next;
    }
    return false;
  }
};
