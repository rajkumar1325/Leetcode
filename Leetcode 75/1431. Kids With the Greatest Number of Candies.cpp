class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // finding the maximum element :: using linear search.
        int maxi = candies[0];
        for(int i=0; i<candies.size(); i++){
            maxi = max(maxi, candies[i]);
        }


        vector<bool> result;
        for(int i=0; i<candies.size(); i++){

            if( (candies[i] + extraCandies) >= maxi){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

        return result;

    }
};
