#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int furthestBuilding(vector<int> &heights, int bricks, int ladders) {
    int i = 0;
    priority_queue<int> queue;

    for (i; i < heights.size() - 1; i++) {
      if (heights[i + 1] <= heights[i]) {
        continue;
      }

      int diff = heights[i + 1] - heights[i];

      if (diff <= bricks) {
        bricks -= diff;
        queue.push(diff);
      } else if (ladders > 0) {
        if (queue.size()) {
          int bricks_used = queue.top();

          if (bricks_used > diff) {
            bricks += bricks_used;
            queue.pop();
            queue.push(diff);
            bricks -= diff;
          }
        }
        // ladder will be used in previous step
        ladders--;
      } else
        break;
    }
    return i;
  }
};

int main() { return 0; }
