class Solution {
public:
    int strStr(string haystack, string needle) {

//It doesn't work, b/c what if the element is found at index 0;
/* 
        int index =0;
        index = haystack.find(needle); //it returns the index
        if(index !=0){
            return index;
        }
        else
            return -1;
*/
    

                    // USING string::npos 
        int index;
        index = haystack.find(needle); //it returns the index

        // String::npos --> belongs to the string class -> you must write string::npos.
        //npos --> Special value (very large number) meaning "not found" in strings.

        if(index != string:: npos){
            return index;
        }
        else
            return -1;
    }
};
