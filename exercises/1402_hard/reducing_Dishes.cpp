#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxSatisfaction(std::vector<int>& satisfaction) {
        std::sort(satisfaction.begin(), satisfaction.end()); 
        int n = satisfaction.size();
        std::vector<std::vector<int>> dp(n + 1, std::vector<int>(n + 1, 0));

        for (int i = n - 1; i >= 0; --i) {
            for (int t = i; t >= 0; --t) {
                dp[i][t] = std::max(
                    satisfaction[i] * (t + 1) + dp[i + 1][t + 1], 
                    dp[i + 1][t]                                 
                );
            }
        }

        return dp[0][0];
    }
};
