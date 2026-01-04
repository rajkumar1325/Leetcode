/*

Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.

 

Example 1:

Input: nums = [21,4,7]
Output: 32
Explanation: 
21 has 4 divisors: 1, 3, 7, 21
4 has 3 divisors: 1, 2, 4
7 has 2 divisors: 1, 7
The answer is the sum of divisors of 21 only.
*/




class Solution {
public:

    int sumArray(vector<int> &arr){
        int sum =0;
        for(int i: arr){
            sum += i;
        }

        return sum;
    }



    int sumFourDivisors(vector<int>& nums) {
        long long finalSum =0;

        for(int x=0; x<nums.size(); x++){
            int n = nums[x];

            vector<int> divisor; //temp array to store the each element divisor...
            for(int i=1; i*i<=n; i++){

                //we work on like if n = 5 --> 1*5 and 5*1 both are true and divisor
                if(n%i ==0){
                    divisor.push_back(i); // 1*5

                    if(i != n/i){
                        divisor.push_back(n/i);// 5*1
                    }
                }
            }

            if(divisor.size() ==4){
                //sum the element of the array and push it to a final sum
                finalSum += sumArray(divisor);
            }

        }
        return finalSum;
    }
};
