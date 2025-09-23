class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int position = nums.size(); //actual indexing --> as it starts from 0;

        while(left<=right){
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                position = mid; //we can also return like --> return left; as we have found it 
                break;
            }

            else if(nums[mid] < target){
                left = mid+1;
            }

            else if( nums[mid] > target){
                position = mid; //as maybe mid is the actual position
                right = mid-1;

            }
        }
        return position;

    }
};
