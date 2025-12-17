//simply count the frequency of each element and check which element have only 1 frequency.


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> freq;

        for(int i: nums){
            freq[i]++;
        }

        // iterate over freq-count and check which have only 1 key-vales count.
        for(auto &it : freq){
            if(it.second!=3){
                return it.first;
            }
        }
        return -1;

    }
};


/*
Problem statement:
- Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
- You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
*/

