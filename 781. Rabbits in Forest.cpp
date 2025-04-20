class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mapp;

        // map how many times each answer appear. like 5 --> 4 times
        for(auto x: answers){
            mapp[x]++;
        }

        int total = 0;
        // for each unique answer
        for(auto& [k,v] : mapp){
            // k --> key = number of same-color rabbits reported by a rabbit
            // v --> value = how many rabbits gave this answer

            int groupSize = k+1;

            int groups = ceil((double)v/groupSize); //type-cast b/c we have to use ceiling value.
            total += groups*groupSize;
        }

        return total;
    }
};
