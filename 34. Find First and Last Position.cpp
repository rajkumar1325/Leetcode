class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstNumber = -1, lastNumber = -1; // Default values if target not found
        int left = 0, right = nums.size() - 1;

        //  Step 1: Find the first occurrence using binary search
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                firstNumber = mid;      // Store the index
                right = mid - 1;        // Keep searching on the left side
            }
            else if (nums[mid] < target) {
                left = mid + 1;         // Move right if target is greater
            }
            else {
                right = mid - 1;        // Move left if target is smaller
            }
        }

        //  Reset the search range for finding last occurrence
        left = 0;
        right = nums.size() - 1;

        // Step 2: Find the last occurrence using binary search
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                lastNumber = mid;       // Store the index
                left = mid + 1;         // Keep searching on the right side
            }
            else if (nums[mid] < target) {
                left = mid + 1;         // Move right if target is greater
            }
            else {
                right = mid - 1;        // Move left if target is smaller
            }
        }

        //Return both positions
        return {firstNumber, lastNumber};
    }
};
