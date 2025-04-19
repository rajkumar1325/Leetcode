class Solution {
public:
    string intToRoman(int num) {
        // Note: Order of the roman number must be in Descending order to work
        // properly eg: 50 + 5 + 3  →  L + V + III  →  "LVIII"


        // creating array for numbers
        vector<int> decimal = {
            1000, 900, 500, 
            400, 100, 90, 
            50, 40,   10, 
            9,   5,   4,   1};

        vector<string> symbols = {
            "M",  "CM", "D",  
            "CD", "C",  "XC", 
            "L", "XL", "X",  
            "IX", "V",  "IV", "I"};


        string roman = "";

        // just iterate over these and write corresponding symbol according to the numbers
        for (int i = 0; i < decimal.size(); i++) {

            while (num >= decimal[i]) {
                roman += symbols[i];
                num = num - decimal[i];
            }
        }

        return roman;
    }
};
