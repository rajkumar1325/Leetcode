class Solution {
public:

    bool isVowel(char ch){
        string vow = "aeiouAEIOU";
        return (vow.find(ch) != string::npos); //if it not found --> return npos
    }

    int maxVowels(string s, int k) {
        int maxVowelCount =0;
        // creating a fixd window size
        for(int i=0; i<k; i++){
            if( isVowel(s[i]) ){
                maxVowelCount++;
            }
        }

        // take a copy for compare
        int maxi = maxVowelCount;

        // incrementing and decrementign the wondow size for further check
        for(int i=k; i<s.size(); i++){
            // if next character is vowel and starting character is not --> remove previous character
            if( isVowel(s[i]) && !isVowel(s[i-k])){
                maxVowelCount++;
            }

            // next is vowel and prevous is also vowel
            else if( isVowel(s[i]) && isVowel(s[i-k])){
                continue;
            }

            // next is not but previous is 
            else if( !isVowel(s[i]) && isVowel(s[i-k]))
                maxVowelCount--;

            maxi = max(maxi, maxVowelCount);
        }
        return maxi;
    }
};
