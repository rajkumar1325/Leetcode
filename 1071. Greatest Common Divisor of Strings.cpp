class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

/*
str1 = "ABCABC"
str2 = "ABC"

str1 + str2 = "ABCABCABC"
str2 + str1 = "ABCABCABC" --> Equal

*/


        // finding common repeating pattern.
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // just use the inbuilt function to finc the gcd.
        int gcdLength = gcd(str1.length(), str2.length());

        return str1.substr(0, gcdLength);
        
    }
};
