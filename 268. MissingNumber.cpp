//NOTE : IT ONLY WORKS WHEN 1 DIGIT IS MISSING.
/*
Approach:
- find the expectedSum using the math formula --> n(n+1)/2
- find the actualSum --> using the loop
- return expectedSum - actualSum
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum =0;
        int approxSum = n*(n+1)/2;
        for (auto n : nums){
            actualSum += n;
        }
        return approxSum - actualSum;
    }
};
