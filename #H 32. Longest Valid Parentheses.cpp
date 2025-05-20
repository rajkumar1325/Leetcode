class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        // push -1 into the stack just as a base 
        st.push(-1);

        int maxContiguous=0;
        // Iterate over the string
        for(int i=0; i<s.size(); i++){
            if(s[i] =='('){
                // simply push the index value
                st.push(i); 
            }

            else if( s[i] == ')'){
                st.pop(); //deletes top index
                if(st.empty()){
                    st.push(i); //new base
                }
                else{
                    maxContiguous = max(maxContiguous, (i - st.top()) );
                }
            }
        }
        return maxContiguous;
    }
};
