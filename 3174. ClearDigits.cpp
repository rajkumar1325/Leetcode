class Solution {
public:
    string clearDigits(string s) {
        for (int i = 1; i < s.length();) {

            // till current element is not alphabet
            if (!isalpha(s[i])) {
                // s.erase(i, 1);     // erase 1 elements from position i;
                s.erase(i - 1, 2); // erase 2 elements from position i-1;
                
                i = max(1, i - 1); // resets if trying to go -ve
            }
            else{
                i++; //increment only if all the non-alphabets are removed
            }
        }

        return s;
    }
};
