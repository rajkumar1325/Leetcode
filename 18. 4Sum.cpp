#include<bits/stdc++.h>
using namespace std;
// Helper Function that returns a 2D vector
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<vector<int>> result; //stores result

        sort(nums.begin(), nums.end()); //as for 2 pointer working, It must be sorted
        

        // now start the all loops
        for (int i = 0; i < n-3; i++){
            // handle duplicate values {check from behind, as It handles out of bound case}
            // if(nums[i] == nums[i+1]) i++;
            if(i>0 && nums[i]==nums[i-1]) continue; //skip the iteration, if duplicate found



            for (int j = i+1; j < n-2; j++){

                if(j>i+1 && nums[j]==nums[j-1]) continue; //skip if duplicate found


                int right = n-1; //last indx of the array
                int left = j+1; //start from where we left off

                while (left < right)
                {
                    long sum = (long) nums[i]+ nums[j] + nums[left] + nums[right];

                    if(sum == target){
                        result.push_back({nums[i], nums[j] , nums[left] , nums[right]});
                        left++;
                        right--;

                        // check for, If next nunmber is duplicate
                        while(left<right &&  nums[left]==nums[left-1]) left++;
                        while(left<right &&  nums[right]==nums[right+1]) right--; //we use +1 as pointer already moved left
                    }

                    else if(sum<target) left++;
                    else right--;
                }
                
                
            }
        }
        return result; //return the final 2D vector
        
    }


int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    int target = 0; //9 + 87

    vector<vector<int>> final = fourSum(arr, target); //store the returned value into 2D vector


    // printing the values
    for (auto &row : final) {
        for (auto &x : row){
            cout << x << " ";
        } 
        cout << endl;
    }  

    
}
