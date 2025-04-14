class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maximum_reached = 0; // lets start with 0th index

        for (int i = 0; i < n; i++) {
            if (i > maximum_reached) { // if still more indexing are present
                return false;
            }
            maximum_reached = max(maximum_reached, (i + nums[i])); // compre b/w next jump and maximum reached.
        }
        return true;
    }
};
