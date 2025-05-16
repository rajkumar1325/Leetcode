class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mapp;
        // mapp in hashmap
        for (int i : arr) {
            mapp[i]++;
        }

        vector<int> ans;
        // copy all the freq.second value inside a vectoe
        for (auto x : mapp) {
            ans.push_back(x.second);
        }

        // check inside the vector whether duplicate value is present inside it or not.!!
        for (int i=0; i<ans.size(); i++) {

            //For each ans[i], search in the remaining part of the vector (from i+1 to end).
            if (find(ans.begin() +i+1 , ans.end(), ans[i]) != ans.end()) {
                return false;
            }
        }

        return true;
    }
};
