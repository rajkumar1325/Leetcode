class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        int index = 0; // tracks of where to place valid numbers in nums

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i]; // get current element

            // Count its frequency
            freq[num]++;

            // If frequency of num <= 2, place it in the current index
            // as we are moifying the actual given vector
            if (freq[num] <= 2) {
                nums[index] = num; // Place the element at the current index
                index++;   // increment index
                
            }
        }
        return index;
    }
};
