class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mapp; //value -> index

        for(int i=0; i<nums.size(); i++){
            if(mapp.find(nums[i]) != mapp.end()){ //if found
                
                if(abs(i-mapp[nums[i] ] ) <=k ){
                    return true;
                }
            }

            // updating index of the map
            mapp[nums[i]] = i; 
        }
        return false;
    }
};
