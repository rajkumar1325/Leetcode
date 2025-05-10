class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // string = 2,3,4,5,6,7,8,9

        // Checking base condition
        if (digits.empty()) return {};

        vector<string> phoneMap = { //mapping from 0 --> 9
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result = {""}; //create a blank string vector

        for (char digit : digits) {
            vector<string> temp; //it gets redeclared --> means overwritten 
            string letters = phoneMap[digit - '0']; //digit-0 -->  ASCII of digit - ASCII of '0'
                            //  ->   Gives the actual numeric value of the digit character


            for (string combination : result) {
                for (char let : letters) {
                    temp.push_back(combination + let); //building new combinations
                }
            }
            
            // swap it b/c it swaps the content in constant time (fast)
            result.swap(temp);  // Alternate : result = temp;

            // Now: result = new combinations
            // temp = old result (not needed anymore)
        }

        return result;
    }
};
