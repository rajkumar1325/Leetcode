class Solution {
public:
// As we have target == 3:
    // we haev only 3 options 
        // 0 --> divisible
        // 1 --> subtract 1 
        // 2 --> add 1
// So basically we have to count that elements which is not divisible by 3
    int minimumOperations(vector<int>& nums) {

        int count =0;
        for(int i : nums){
            if(i%3==0){
                continue;
            }
            count++;
        }
        return count;
    }
};
