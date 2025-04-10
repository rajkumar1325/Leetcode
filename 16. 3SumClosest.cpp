class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int closestSum = nums[0] + nums[1] + nums[2]; // start with a valid sum

        int n = nums.size();
        for (int i = 0; i < n-2; i++) { //n-2 b/c last 2 already counted

            int left = i + 1;
            int right = n - 1;

            // usign 2 pointer
            int currentSum = 0;
            while (left < right) {
                currentSum = nums[i] + nums[left] + nums[right];
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                if (currentSum < target) {
                    left++;
                } 
                else if (currentSum > target) {
                    right--;
                }
                else{
                    return currentSum; //if perfect match //(currentSum == target) return currentSum;

                }
            }
        }
        return closestSum;
    }
};



/*

Step-by-Step Flow:
Sort the array to make two-pointer logic work.

Loop i from 0 to n - 3:

Set two pointers:
left = i + 1,
right = n - 1

Inside while (left < right):

Calculate currentSum = nums[i] + nums[left] + nums[right]

If it's closer to target than previous best → update closestSum.

If currentSum < target → need a bigger sum → move left++

If currentSum > target → need a smaller sum → move right--

If currentSum == target → perfect match, return immediately.

*/
