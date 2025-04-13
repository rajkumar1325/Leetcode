class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        //count frequency
        for(int n: nums){
            freq[n]++;
        }

        int mid = nums.size()/2;
        // checking if any one have frequency greter than the mid
        for(auto& pair: freq){
            if(pair.second>mid){
                return pair.first;
            }
        }
        return -1;
    }
};
