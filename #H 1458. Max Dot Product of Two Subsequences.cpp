/*
Given two arrays nums1 and nums2.

Return the maximum dot product between non-empty subsequences of nums1 and nums2 with the same length.

A subsequence of a array is a new array which is formed from the original array by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, [2,3,5] is a subsequence of [1,2,3,4,5] while [1,5,3] is not).

 
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        const int NEG_INF = -1e9;  // Safe since max value is bounded

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, NEG_INF));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int pair = nums1[i - 1] * nums2[j - 1];

                int use_pair = max(pair, pair + dp[i - 1][j - 1]);

                dp[i][j] = max({ use_pair, dp[i - 1][j], dp[i][j - 1] });
            }
        }

        return dp[n][m];
    }
};
