class Solution {
public:
    string multiply(string num1, string num2) {
        int n= num1.size();
        int m= num2.size();

        vector<int> result(n+m, 0); //size is n+m and initialised each with 0

        // move from right to left
        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){

                // now take each element from both the string.
                int number1 = num1[i] - '0'; //converting string into number.
                int number2 = num2[j] - '0';

                int multiply = number1*number2;

                // now we have to handle carry {number+carry}
                int sum = multiply + result[i+j+1];

                // now put the values inside the vector --> push_back inside the vector
                result[i+j+1] = sum%10; //extract ones
                result[i+j] += sum/10; //extract tens

            }
        }

        // now we have to convert the vector into string.
        string finalAns = "";
        for(int i : result){
            if(finalAns.empty() && i ==0){ //skip leading zeros
                continue;
            }
            finalAns.push_back(i + '0'); //converting number into string
        }

        // check if the finalAns is still empty
        if(finalAns.empty()) return "0";
        else return finalAns;
    }
};
