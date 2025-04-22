class Solution {
public:
    int findMin(vector<int>& nums) {
        // use binary search to find which part of the sorted array contains the target(minimum value)
        int left =0, right = nums.size()-1;

//when left ==right --> It stops
        while(left<right){
            int mid = left + (right-left)/2;

            if(nums[mid] > nums[right]){
                // means target is on the right side
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};
