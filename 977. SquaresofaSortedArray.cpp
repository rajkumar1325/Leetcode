class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        // simple but not effective (o(nlogn));
/*      vector<int> squares;
        for(int i=0; i<nums.size(); i++){
            squares.push_back(abs(nums[i] * nums[i]));
        }
        sort(squares.begin(), squares.end());

        return squares;
*/  

        // without using extra vector, as we dont have to take care of previous data
        for(int i=0;i<nums.size();i++)
            nums[i] = nums[i] * nums[i];
        
    sort(nums.begin(),nums.end());
    return nums;

    }
};
