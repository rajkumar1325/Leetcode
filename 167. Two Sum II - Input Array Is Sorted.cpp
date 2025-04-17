class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // Assigning 2 pointer
        int left = 0;       //start pointer
        int right = numbers.size() - 1; //end pointer

    // using 2 pointer
        while (left < right) {
            int result = numbers[left] + numbers[right];

            if (target == result) {
                return {left + 1, right + 1}; // as indexing starts from 1 not 0
            } 
            
            else if (result < target) {
                left++; // as array is sorted, so we move forward
            } 
            else {
                right--;
            }
        }
        return {}; //return blank if nothing found
    }
};
