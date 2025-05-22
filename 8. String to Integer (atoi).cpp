class Solution {
public:
    int myAtoi(string s) {
        int sign = 1; //let initial poistive
        
        int i=0; //let base/starting indx

        // Skips all the leading white spaces
        while(i<s.size() && s[i] == ' '){
            i++;
        }


        // check if starting sign is - (-ve)
        if(i<s.size()  && (s[i] == '-' || s[i] == '+') ){
            sign = (s[i]=='-')? -1 : 1; //write respectively
            i++; //go to next index
        }

        // store all the digit elements and also handle using INT-MAX and INT-MIN
        int number=0;
        while(i<s.size() && isdigit(s[i])){
            int digit = s[i] -'0';

            // checking for overflow condition
            if(number > (INT_MAX - digit)/10){
                if (sign == 1) //if number is +ve --> return maximum positive number
                    return INT_MAX;
                else
                    return INT_MIN;

            }
            number = number *10 + digit;
            i++;
        }
        


        return sign*number;
    }
};
