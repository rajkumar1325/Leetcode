class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end()); // set for O(1) lookup
        int longestStreak = 0;

        for (int n : numSet) {
            // Check if it's the start of a sequence --> must not have previous element
            if (numSet.find(n - 1) == numSet.end()) { // if previous consecutive element --> not present
                int currentStreak = 0;

                while (numSet.find(n + currentStreak) != numSet.end()) {
                    //Keep checking if n + 1, n + 2, ... exists in the set.
                    currentStreak++; //Count how many consecutive numbers are present.

                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
