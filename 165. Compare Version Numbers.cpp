/*
Given two version strings, version1 and version2, compare them. A version string consists of revisions separated by dots '.'. The value of the revision is its integer conversion ignoring leading zeros.
To compare version strings, compare their revision values in left-to-right order. If one of the version strings has fewer revisions, treat the missing revision values as 0.

Return the following:
- If version1 < version2, return -1.
- If version1 > version2, return 1.
- Otherwise, return 0.
*/

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        int n1 = version1.size(), n2 = version2.size();

        while(i<n1 || j<n2){
            int number1=0, number2 =0;

            // making of integer number1
            while(i<n1 &&   version1[i] != '.'){
                number1 = number1*10 + (version1[i] -'0');
                i++;
            }

            
            // making of integer number 2
            while(j<n2 &&    version2[j] != '.'){
                number2 = number2*10 + (version2[j]-'0');
                j++;
            }


            if (number1<number2) return -1;
            if (number1>number2) return 1;


            // if same --> check for next --> skip the dot
            i++;
            j++;
        }
        return 0;
    }

};
