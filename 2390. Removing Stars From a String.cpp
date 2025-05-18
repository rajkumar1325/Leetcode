class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(char ch : s){

            if(ch == '*'){
                if(!st.empty()) //if it have some values.
                    st.pop(); //remove the character before it
            }

            else{
                st.push(ch);
            }
        }


        // now we have a stack with resultant ans --> convert into string into reverse order and return it

        string result; 
        while( !st.empty() ){
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;


    }
};
