class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int ans = strs[0].length(); //take 1st element length

        // Iterate over vector
        for(int i=1; i<n; i++){
            int j = 0;

    
        // Compare characters of current string with the first string
            // Stop when characters differ or end of string is reached
            while(j<strs[i].length() && strs[i][j]==strs[0][j])
            {
                j++;
            }
            ans = min(ans, j);
        }
        // Update the answer to the shortest match
        return strs[0].substr(0, ans);
    }
};

/*
Input: ["flower", "flow", "flight"]

Step-by-step:
- ans = 6 (length of "flower")
- Compare "flower" with "flow": common = "flow" → j = 4 → ans = 4
- Compare "flower" with "flight": common = "fl" → j = 2 → ans = 2

Return: s[0].substr(0, 2) → "fl"

*/
