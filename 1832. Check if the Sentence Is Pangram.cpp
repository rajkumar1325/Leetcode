class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> Alphabets;
        for(int i=0; i<sentence.length(); i++){
            Alphabets.insert(sentence[i]);
        }

        // checking its size
        if(Alphabets.size() == 26){
            return true;
        }
        else
            return false;
    }
};

/*
1. create an unordered set.
2. insert all the elements/charater to the set.
3. check if set have 26 letters

*/
