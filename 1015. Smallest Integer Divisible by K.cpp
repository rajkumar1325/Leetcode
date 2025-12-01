/*
Given a positive integer k, you need to find the length of the smallest positive integer n such that n is divisible by k, and n only contains the digit 1.

Return the length of n. If there is no such n, return -1.

Note: n may not fit in a 64-bit signed integer.
*/

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2 == 0   ||  k%5 == 0){ //number made with 1 can never be divisible by 2 and 5
            return -1;
        }

        int rem =0;
        int length=0;

        // Loop until remainder becomes 0
        while(1){
            rem = (rem*10 + 1) % k; //mke the number using 1 only
            length++;

            if(rem ==0) return length; //if found
            if(length>k) { //as it forms a cycle
                return -1;
            }
        }
        
    }
};
