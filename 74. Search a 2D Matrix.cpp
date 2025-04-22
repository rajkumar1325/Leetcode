class Solution {
public:
/*
    Approach:
        1. convert the 2d array into 1d. 
                make an vector and then push_back all the valurs of 2d vector into it
                Therefore, it is converted into 1D array.
        2. use binary search to find the target, is it present or not!!!
            
*/
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Converting 2d array into 1D array
        vector<int> oneDArray;

        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                // Assign the value from the 2D array to the 1D array
                oneDArray.push_back(matrix[r][c]);
            }
        }

        // Apply binary search
        int left =0, right = oneDArray.size()-1;
        while(left<=right){
            int mid = left+ (right-left)/2;
            if(oneDArray[mid] == target){
                return true;
            }

            if(oneDArray[mid]< target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return false;
    }
};
