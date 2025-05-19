class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for(int ch : asteroids){
            bool destroyed = false;
            // check if the asteroid will be destroyed or not1
            while(!st.empty() && ( ch<0 && st.top()>0) ){

                // if both values are same and in opposite direction {direction is checked already inside while loop}
                if(abs(ch) == st.top()){
                    st.pop(); //destroy top element
                    destroyed = true; //destroy itself too
                    break;
                }

                else if(abs(ch) > st.top()){
                    st.pop(); //top is destroyed
                    continue; //checks for next , before adding into stack
                }

                else{
                    // incoming asteroid is less so already destroyed
                    destroyed = true;
                    break;
                }                
            }
            if(!destroyed){
                   st.push(ch);
               }
        }


        // now we have a stack of only rewuired elements --> store into vector and return
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;

    }
};
