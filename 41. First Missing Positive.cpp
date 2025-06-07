class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> numbers; // Efficient lookup: O(1) average

        // add all only +ve numbers.
        for(int n: nums){
            if(n>0){
                numbers.insert(n);
            }
        }


        int i=1;
        while(true){
            if(numbers.find(i) == numbers.end()){ //not found
                return i;
            }
            i++;
        }
        return i+1; // if it is at the last 
    }
};
