class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // using 2 pointer
        int l= 0;
        int r = numbers.size()-1; 
        
        while(l<r){
            if(numbers[l] + numbers[r] == target){
                return {l+1, r+1}; // As it want 1 based indx. return as a vector of list
            }

            else if( numbers[l] + numbers[r] < target ) l++; //hve to make our value big
            else r--;
        }
        return {-1, -1}; //leetcode safe
    }
};
