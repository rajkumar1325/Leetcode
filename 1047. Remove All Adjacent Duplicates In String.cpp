class Solution {
public:
    string removeDuplicates(string s) {

        // STRING-BASED APPROACH - LIKE STACK
        string result;
        for(char ch: s){
            if(!result.empty() && result.back() == ch){
                result.pop_back(); //removes last element
            }
            else{
                result.push_back(ch);
            }
        }
        return result;













/*
        // STACK-BASED SOLUTION
        stack<char> st;
        for(char ch: s){
            if(!st.empty()  &&  st.top() == ch){
                st.pop(); //removes top element
            }
            else{
                st.push(ch);
            }
        }

        // now we have a stack, that contains result.
        string result;
        while(!st.empty()){
            result.insert(result.begin(),  st.top() ) ; //bypassing the reversing phase
            st.pop();
        }
        return result;

*/
    }
};
