class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     // we have to make it in o(logn) --> we use Binary search algo
        int left =0, right = nums.size()-1;

        while(left < right){
            int mid = left+ (right-left)/2;

            // We're on a downward slope
            // So a peak must exist on the left (could be mid itself)
            if(nums[mid] > nums[mid+1]){
                //element is at left side
                right = mid;
            }
            // We're on an upward slope
            // So a peak must exist on the right
            else{
                left = mid+1;
            }
        }
        return left;
    }
};
