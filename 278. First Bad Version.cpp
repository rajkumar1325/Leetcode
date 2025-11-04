// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start =1;
        int end = n;

        while(start<end){
            int middle = start + (end-start)/2;

            // we move end to middle as maybe there are also true below that
            if(isBadVersion(middle) == true){
                end = middle;
            }

            else{
                start = middle+1;
            }
        }
        return start;
    }
};
