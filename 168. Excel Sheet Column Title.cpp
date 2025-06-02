class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result="";
        while(columnNumber>0){
            columnNumber --; //adjust for 0 indxing , as modulo can give 0
            int remainder = columnNumber%26;
            result += char('A'+remainder); //we adjust b/c of this (A+remainder) as remainder should 0 incase of A
            columnNumber /= 26;
        }

        // reverse the string before returning
        reverse(result.begin(), result.end());

        return result;
    }
};
