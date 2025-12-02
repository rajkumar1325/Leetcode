class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x =0; //starting

        for(string s : operations){
            if(s == "++X" || s == "X++") x++;
            else x--;
        }

        return x;
    }
};


/*
Input: operations = ["--X","X++","X++"]
Output: 1
Explanation: The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.
*/
