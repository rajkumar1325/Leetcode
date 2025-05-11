class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
/*        Logic::
                1. make a unordered_map to map the remaining number (pair:: number--> freq)
                2. find the required number to add to form the target (k)
                3. Check and store at the same time
                
*/
        unordered_map<int, int> freq; //mapping number --> reqNumber //keep track of leftOver numebr

        int count=0;
        for(int n : nums){
            int remainNumber = k-n;

            // Check if a pair is available
            if(freq[remainNumber] > 0){ //is number present inside the freq.
                count++;
                freq[remainNumber] --; //decrease it freq, as it used once
            }

            //  If no pair found
            else{
                // let's store it in the map for possible pairing later
                freq[n]++;
            }
        }

        return count;

    }
};
