class Solution {
public:
    int trailingZeroes(int n) {
        /*
                // finding factorial
                log long fact =1;
                for(int i=n; i>0; i--){
                    fact *= i;
                }

                // find trailing zeros
                int count =0;
                while (fact>0){
                    int remainder = fact %10;
                    if(remainder != 0){
                        break;
                    }
                    count++;
                    fact /= 10;

                }

                return count;

        */

        // we cant able to store the value of long n inside any int (even it is
        // long long) Find a approach in which no need to find the factorial

        int count =0;
        while (n >= 5) {
            n /= 5;
            count += n;
        }
        return count;

        /*
        To create a trailing zero, we need a factor of 10, and each factor of 10 comes from multiplying a 2 and a 5. Since 2s are more frequent than 5s in any factorial, the number of trailing zeros is determined by how many times 5 appears as a factor in the factorial.

        eg: 5! --> 5/5 =1 --> ans = 1 , hence 1 trailing zero are present
        eg: 100! --> 100/5= 20 --> 20/5 =5 --> ans 20+4 =24, hence 24 trailing zero are present 
        */
    }
};
