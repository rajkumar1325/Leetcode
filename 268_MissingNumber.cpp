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
