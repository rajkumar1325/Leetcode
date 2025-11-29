// Given an binary array nums and an integer k, return true if all 1's are at least k places away from each other, otherwise return false.
        // Input: nums = [1,0,0,0,1,0,0,1], k = 2
        // Output: true
        // Explanation: Each of the 1s are at least 2 places away from each other.

#include<bits/stdc++.h>
using namespace std;

    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> indexes;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){ //check if contains 1's
                indexes.push_back(i); //store the index
            }
        }

        // check if difference between 2 indexes is greater than k or not!
        for(int i=1; i<indexes.size(); i++){
            if(indexes[i]- indexes[i-1]  <= k){
                return false;
            }
        }
        return true;
    }
    
int main(){
    vector<int> nums = {1,0,0,1,0,1};
    int k=2;
    bool ans = kLengthApart(nums, k);
    cout<<ans;
}
