class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int totalSum = 0;
        for(int i : nums){
            totalSum += i;
        }

        int remainder = totalSum % k;
        return remainder;
    }
};
