/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // picking number from 1 to n
        int left = 1; //start
        int right = n; //end

        while(left<=right){
            int mid = left + ((right-left)/2);

            int result = guess(mid); //fn call    ---> return -1, 1, 0
            

            if(result == 0) { //found
                return mid;
            }

            else if(result == -1){ //means larger number
                right = mid-1;
            }

            else if(result == 1){ //low number
                left = mid+1;
            }

        }
        return -1;
    }
};
