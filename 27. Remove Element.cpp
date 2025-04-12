class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // use remove-erase idiom to remove all val from nums
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        
        return nums.size();

    }
};



/*
remove	--> Rearranges elements	    --> doesn't effect vector size / changes vector size as deleted
erase	-->    Deletes elements	    --> affect vector size
*/
