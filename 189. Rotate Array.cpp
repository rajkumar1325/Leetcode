class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k%n; //handle out-of-bound cases.

        // Reverse the entire array.
        reverse(nums.begin(), nums.end());

        // Reverse starting k elements
        reverse(nums.begin(), nums.begin()+k); //k is excluded

        // Reversing remaining elements
        reverse(nums.begin()+k, nums.end());
        
    }
};



/*
Original array: 1 2 3 4 5 6 7 
After reversing the whole array: 7 6 5 4 3 2 1 
After reversing first k elements: 5 6 7   4 3 2 1 , let say k==3
After reversing remaining elements: 5 6 7   1 2 3 4 

*/
