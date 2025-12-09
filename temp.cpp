/*
A special triplet is defined as a triplet of indices (i, j, k) such that:

- 0 <= i < j < k < n, where n = nums.length
- nums[i] == nums[j] * 2
- nums[k] == nums[j] * 2
*/



/*
// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

    int specialTriplets(vector<int>& nums) {
        int n= nums.size();
        int count =0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if ((nums[i] == nums[j]*2) && (nums[k] == nums[j]*2)){
                count++;
            }
                }
            }
            
            
        }
        
        return count;
    }




int main() {
    // Write C++ code here
    vector<int>nums = {0,1,0,0};
    cout<<specialTriplets(nums);

    return 0;
}
*/
