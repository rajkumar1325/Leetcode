class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // s1: create 2 set and copy all the elements of vector inside it.
        // s2: Clear the previous vectors to store the result, or create a new one(takes extra space)
        // Check which elements of set1 is not present in set2 --> add it to vectors
        // return vector

        // STEP1:
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        // Step2:
        nums1.clear();
        nums2.clear();

        // Step3:
        // Check element of set1 is not present in set2.
        for(int x: set1){
            if(set2.find(x) == set2.end()){ //not found
                nums1.push_back(x);
            }
        }


        // Check whether elemens of set2 is not in set1
        for(int c: set2){
            if(set1.find(c) == set1.end()){
                nums2.push_back(c);
            }
        }

        return {nums1, nums2};
        
    }
};
