class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int firstNumber = INT_MAX, secondNumber = INT_MAX;

        for(int x: nums){
            if(x <= firstNumber){
                firstNumber = x;
            }
            else if(x <= secondNumber){
                secondNumber = x;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
