class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> array(n, 0); // same size array for storing the answer.

        for (int i = 0; i < n; i++) {
            // Variable to store the sum for the current index
            int sum = 0;

            // If k > 0 (move forward)
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    int idx = i + j;
                    if (idx > n - 1) {
                        idx =
                            idx - n; // Wrap around if index exceeds array size
                    }
                    sum += code[idx];
                }
            }

            // If k < 0 (move backward)
            else if (k < 0) {
                for (int j = 1; j <= -k;
                     j++) { // When k is negative, it tells you to move
                            // backwards in the array (as opposed to moving
                            // forwards when k is positive)
                    int idx = i - j;
                    if (idx < 0) {
                        idx = idx + n; // Wrap around if index goes below 0
                    }
                    sum += code[idx];
                }
            } else if (k == 0) {
                code[i] = 0;
            }

            
            // Storing the sum in the result array

            // array.push_back(sum); //if we use this, it pushes 0 also, as we
            // dont need it
            array[i] = sum; // push inside the array
        }
        return array;
    }
};
