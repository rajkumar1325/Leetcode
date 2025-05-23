class Solution {
public:
    int uniquePaths(int m, int n) {
        // Initialise a 2d vector of size m*n and initialise all the elements of n with 1
        vector<vector<int>> arr(m, vector<int>(n,1) );

        // we have to add the the left-indx value and top-indx value to the curretn index
        // lets start the loop with 1 :: as 0th row and 0th column already have 1 
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                arr[i][j] = arr[i-1][j] + arr[i][j-1];  //left+top element
            }
        }
        return arr[m-1][n-1]; // as loop starts from 1, {If It starts from 0 we return arr[m][n]}
    }
};


![Alt Text](https://drive.google.com/file/d/14rF4be3TJDj7xF7ykv_ioMozPQ537DAD/view?usp=drive_link)
