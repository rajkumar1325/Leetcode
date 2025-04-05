class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0;
        while (i < nums.size()) {
            int correct = nums[i] - 1;
            if (nums[i] > 0 && nums[i] <= nums.size() &&
                nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
            } else {
                i++;
            }
        }

        // Find missing numbers
        vector<int> missing;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1) {
                missing.push_back(i + 1);
            }
        }
        return missing;
    }
};
