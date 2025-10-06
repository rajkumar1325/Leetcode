// find the element at evenPostion and oddPosition inside the vector, and store it inside the variable --> then return the difference between the evenSum and oddSum.
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int evenSum =0, oddSum =0;

        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                evenSum += nums[i];
            }
            else{
                oddSum += nums[i];
            }
        }

        return evenSum-oddSum;
    }
};
