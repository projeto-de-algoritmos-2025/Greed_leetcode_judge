#include <vector>
#include <algorithm>

class Solution {
public:
    int jump(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int jumps = 0;
        int current_end = 0;  
        int farthest = 0;     
        int i = 0;

        while (current_end < n - 1) {
            jumps++;
            while (i <= current_end) {
                farthest = std::max(farthest, i + nums[i]);
                i++;
            }
            if (farthest <= current_end) {
                return -1;
            }
            current_end = farthest;
        }

        return jumps;
    }
};
