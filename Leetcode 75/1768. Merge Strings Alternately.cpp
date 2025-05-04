class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;

        int n = max(word1.size(), word2.size());

        for (int i = 0; i < n; i++) {
            // append only if there exists
            if (i < word1.size()) {
                result += word1[i]; // we can't use append as Append adds string  not character.
            }

            if (i < word2.size()) {
                result += word2[i];
            }
        }

        return result;
    }
};
