class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> triplets;  //to store the uniquer triplets.
        sort(nums.begin(), nums.end()); //sort the array

        int n = nums.size();

        for(int i=0; i<n-2; i++){
            int left = i+1; //second element
            int right = n-1;

            // use 2 pointer to print the valid triplets.
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];

                if(sum ==0){ //if sum is 0 --> push the triplet to the set
                    triplets.insert( {nums[i] , nums[left] , nums[right]} );
                    left++; //After inserting update the values for further loop
                    right--;
                }

                else if(sum<0){ //number is too small, since array is already sorted  --> left++
                    left++;
                }

                else if(sum>0){ //if number is exceed, reduce the number
                    right--;
                }
            }
        }
    // since here return type is vector, we can't return a set
        // return triplets;

    // convert it into vector and then return it
        return vector<vector<int>> (triplets.begin(), triplets.end());

    }
};
