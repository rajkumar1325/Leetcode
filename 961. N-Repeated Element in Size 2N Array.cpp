
/*
You are given an integer array nums with the following properties:

nums.length == 2 * n.
nums contains n + 1 unique elements.
Exactly one element of nums is repeated n times.
Return the element that is repeated n times.
*/


//My solution ---> Time and Space completxity O(n)
class Solution {
public:
//count the freq and return the maximum frequeny number
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i : nums){
            mp[i]++;
        }

        int maxFreq = 0;
        int maxNum;
        for(auto &it : mp){
            if(it.second > maxFreq){
                maxFreq = it.second;
                maxNum = it.first;
            }             
        }

        return maxNum;
    }
};
