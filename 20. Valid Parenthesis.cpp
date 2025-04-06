class Solution {
public:
    bool isValid(string s) {
        stack<char> staxc; // stack initialisation

        for (char ch : s) {
            // If opening braces found --> push it to the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                staxc.push(ch);
            }

            // If closing braces found
            else {
                if (staxc.empty())
                    return false; // if stack is empty --> its not a valid case.


                // checking if the top element mathches the closing braces
                if (
                    (ch == ')' && staxc.top() != '(' ) || 
                    (ch == '}' && staxc.top() != '{' ) || 
                    (ch == ']' && staxc.top() != '[' )
                    ) 
                {
                    return false;
                }

                else { // if found the match, pop the top element(opening braces)
                    staxc.pop();
                }
            }
        }
        // check if stack is empty --> means all are mathched -> return true
        return staxc.empty();
    }
};





/*
# Intuition
To check if a string of brackets is valid, we need to ensure that:
1. Every opening bracket has a corresponding closing bracket.
2. The brackets are closed in the correct order.
A stack is perfect for this because it follows the Last-In-First-Out (LIFO) behavior, which matches how brackets should close.

# Approach
- Loop through each character in the string.
- If the character is an opening bracket (`(`, `{`, `[`), push it to the stack.
- If it's a closing bracket (`)`, `}`, `]`):
  - Check if the stack is empty. If it is, return false (no matching opening bracket).
  - Otherwise, check if the top of the stack matches the corresponding opening bracket.
    - If not, return false.
    - If yes, pop the top element from the stack.
- After looping, return true if the stack is empty (all brackets matched); otherwise, false.

# Complexity
- Time complexity:
  $$O(n)$$ — We go through each character in the string once.

- Space complexity:
  $$O(n)$$ — In the worst case, all characters are opening brackets, so we store them in the stack.
*/
