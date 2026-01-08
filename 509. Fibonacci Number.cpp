/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
*/

class Solution {
public:
    int fib(int n) {
        //solve it using the most effective approach
        
        //Base condition
        if(n<=1){
            return n; 
        }

        //take three variable 
        int prev2 = 0; // 0th index
        int prev1 = 1; // 1st index
        int current;

        for(int i=2; i<=n; i++){
            current = prev2 + prev1;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
};
