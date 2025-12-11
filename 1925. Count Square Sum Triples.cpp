class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int a=1; a<=n; a++){
            for(int b=1; b<=n; b++){
                int numFormed = a*a + b*b;
                int c = sqrt(numFormed);
                if(c*c == numFormed && c <= n){ //is c*c==numFormed is a valid square.?
                    count++;
                }
            }
        }
        return count;
    }
};
