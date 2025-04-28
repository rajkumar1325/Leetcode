class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> set; //since we have to store vector inside the set
        sort(nums.begin(), nums.end());

        do{
            set.insert(nums);
        }
        while(next_permutation(nums.begin(), nums.end() ));

        // Convert set into vector as It receives vector as a return.
        vector<vector<int>> result(set.begin(), set.end());

        return result;
    }
};
