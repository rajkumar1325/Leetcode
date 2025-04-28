class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // As I know,
        // next_permutation :: gives the next lexicological greater permutation.
        // So simply use it.

        vector<int> next( next_permutation(nums.begin(), nums.end()) );

        for(int x: next){
            cout<<x<<" ";
        }

    }
};
