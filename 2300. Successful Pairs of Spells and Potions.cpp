class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<int> result; //to store final result.

        sort(potions.begin(), potions.end()); //as to use Binary search



        // now we can apply binary search algo
        for (long long i : spells) { //spells

            int left = 0, right = potions.size() - 1; //must be reset after each iteration

            while (left <= right) { //potions
                int mid = left + (right - left)/2;

                if ((i * potions[mid]) >= success) {
                    // still have some number in the left which can also be included.
                    right = mid - 1;
                } 
                else if ((i * potions[mid]) < success) {
                    // have some number on the right side
                    left = mid + 1;
                }
            }
            // here we get left and right index of the desired values
            // After that all values must be greater, as we sorted it.
            result.push_back(potions.size()-left);
            
        }
        return result;
    }
};
