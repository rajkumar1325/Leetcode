class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;

        for (int i = n ; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // if all digits are 9 only
        // add a 1 before that digit.
        digits.insert(digits.begin(), 1);

        return digits;
    }
};
