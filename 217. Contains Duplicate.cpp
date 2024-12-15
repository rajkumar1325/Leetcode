// Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array

        // Check for consecutive duplicates
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) {
                return true;
            }
        }

        return false;
    }
};



// Example:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation: The element 1 occurs at the indices 0 and 3.
