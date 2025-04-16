class Solution {
public:
    int lengthOfLastWord(string s) {

        stringstream ss(s); // Now the stream ss holds the string:
        string word;
        string lastWord = "";

        // ss >> word pulls out the next word (separated by space) and stores it in the variable word.
        while (ss >> word) { // The loop continues until all words are read
            lastWord = word;
        }
        return lastWord.length();
    }
};
