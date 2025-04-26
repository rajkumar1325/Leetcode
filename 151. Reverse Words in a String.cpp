class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s); //creating object of stringStream
        string word; //handle each word

        // using stack to print reverse side
        stack<string> sta;

        // Adding inside the stack
        while(ss>>word){
            sta.push(word);
        }

        string result=""; //stores ans
        while(!sta.empty()){
            result += sta.top() +" ";
            sta.pop(); //removes top element after insertion
        }

        // removing last character if it is a space.
        if(result.back() == ' '){
            result.pop_back(); //pop_back is used to remove last character from a string.
        }

        return result;


    }
};
