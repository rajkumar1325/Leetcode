class Solution {
public:
    string decodeString(string s) {
        stack<string> stringSt; //stores result string 
        stack<int> countSt; //stores the number which we use to repeat the characters
        string currentString="";
        int currentNumber =0;
        string decoded;

        for(char ch: s){
            if(isdigit(ch)){
                currentNumber = currentNumber*10 + (ch - '0');
            }

            // It starts
            else if(ch =='['){
                // push number and string into corresponding stack and resets it
                stringSt.push(currentString);
                countSt.push(currentNumber);

                // resets it for next segment
                currentNumber =0;
                currentString ="";

            }

            // If Ends
            else if(ch == ']'){
                int repeatCount = countSt.top(); countSt.pop(); //copy top element and pop it
                string st = stringSt.top(); stringSt.pop();    //copy top string and pop

                // repeat the character --> number times
                decoded=""; //resets for next segment.
                for(int i=0; i<repeatCount; i++){
                    decoded += currentString;
                }
                currentString = st + decoded; //store the result in currentStr for further decoding.

            }

            else{ //if simply character comes into play --> just push it
                currentString += ch;
            }
        }

        return currentString;

    }
};
