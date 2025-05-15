class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0;
        int minLength = INT_MAX;
        int windowSum=0;


        for(int right=0; right<nums.size(); right++){
            windowSum += nums[right]; //increase window size 

            // while this true --> means it satisfy the condition
            while(windowSum >= target){
                minLength = min(minLength, (right-left+1)); //right-left+1 --> length of the current subarray
                windowSum -= nums[left];
                left++;
            }


        }

        // if we traverse and didnt find 
        if(minLength == INT_MAX){
            return 0;
        }
        return minLength;
        
    }
};
