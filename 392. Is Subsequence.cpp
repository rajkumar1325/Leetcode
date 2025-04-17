class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0; // pointer for s
        int b = 0; // pointer for t

        // run until anyone have ended
        while (a < s.length() && b < t.length()) {

            // search for target
            if (s[a] == t[b]) {
                a++; // increment s index value if found
            }
            b++; // increment t index value 
        }


        if (a == s.length()) {
            return true;
        } 
        else
            return false;
    }
};
