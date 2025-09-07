class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end()); //copy into set
        set<int> s2(nums2.begin(), nums2.end());
        
        vector<int> result;

        for(int i: s1){
            if(s2.count(i)){ //does set2 contains i (value) of set1
                result.push_back(i);
            }
        }
        return result;
    }
};
