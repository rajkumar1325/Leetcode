class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // check for match
            if (nums[mid] == target) {
                return true;
            }

            // // Handle duplicates on both ends
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue;
            }


            // lets say, left half is sorted.
            else if (nums[left] <= nums[mid]) {
                // check if the target lies inside it {between left and mid}
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else
                    left = mid + 1;
            }

            // lets say, right half is sorted.
            else if (nums[mid] <= nums[right]) {
                // check if the target lies inside it {between mid and right}
                if (target >= nums[mid] && target <= nums[right]) {
                    left = mid + 1;

                } else
                    right = mid - 1;
            }
        }
        return false;
    }
};
