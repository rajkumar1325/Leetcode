class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(auto x: nums){
            freq[x]++;
        }

        for(auto i: freq){
            if(i.second ==1) {
                return i.first;
            }
        }
        return -1;
        
        
    }
};
