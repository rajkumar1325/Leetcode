class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) { // row

            // use the binary search on each row
            int left = 0, right = matrix[i].size() - 1;

            while (left <= right) {
                int mid = left + ((right - left) / 2);

                if (matrix[i][mid] == target) {
                    return true;
                }

                // if greater target is greater than middle element
                else if (target > matrix[i][mid]) {
                    left = mid + 1;
                }

                // if smaller
                else {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
};
