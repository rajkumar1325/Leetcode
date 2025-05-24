class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int High =0;
        int start =0;
        int maxHigh = INT_MIN;
        for(int num : gain){
            High = High + num;
            maxHigh = max(maxHigh, High);
        }

        if(maxHigh > start){
            return maxHigh;
        }
        return start;
    }
};
