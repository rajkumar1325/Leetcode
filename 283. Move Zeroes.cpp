class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // moving all the non-zero element at the beginning
        int nonZero = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[nonZero] = nums[i];
                nonZero++;
            }
        }

        // fill remaoining part with zero
        for(int i = nonZero; i<nums.size(); i++){
            nums[i] = 0;
        }


                                    // ITS SIMPLE BUT NOT EFFICIENT
    
        // for(int i=0; i< nums.size(); i++){
        //     for(int j=i; j<nums.size(); j++){
        //         if(nums[i] ==0){
        //             swap(nums[i], nums[j]);
        //         }
        //     }
        // }


    }
};
