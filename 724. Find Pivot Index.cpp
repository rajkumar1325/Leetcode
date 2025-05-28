class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum =0, rightSum = 0;
        // calculate the sum
        for(int i : nums){
            rightSum += i;
        }
        //rightSum = total
        
        // for the actual work
        for(int i =0; i<nums.size(); i++){
            leftSum += nums[i];

            if(leftSum == rightSum){
                return i;
            }

            rightSum = (rightSum - nums[i]) ;
        }
        
        return -1;

    }
};
