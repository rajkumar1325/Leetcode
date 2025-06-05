class Solution {
public:
    int climbStairs(int n) {
        int first =1, second =1;
        
        for(int i=2; i<=n; i++){
            int current = first+second;
            first = second;
            second = current;
        }
        return second;
    }
};
