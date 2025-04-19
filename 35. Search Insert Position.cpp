class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // using 2 pointer approach
        int left =0; //to match indexing
        int right = nums.size();

        while(left<right){
            if(nums[left] == target){
                return left;
            }

            if(nums[left] < target){
                left++;
            }
            else{
                right--;
            }
        }
        return left;
    }
};
