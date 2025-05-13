class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // idea is simple
            // make a new array with starting and ending 0
            // iterate through the array
            // check if (arr[i-1] , arr[i] , arr[i+1] ==0)
                    // if yes --> yes you can plant flower
                    // else not
        vector<int>newArray;
        newArray.insert(newArray.begin(),0); //insert at beginning
        newArray.insert(newArray.begin()+1, flowerbed.begin(), flowerbed.end() ); //inserting old array inside it
        newArray.push_back(0); //insert at end

        int count =0;
        for(int i=1; i<newArray.size()-1; i++){ //leaving 1st and last element.
            if(newArray[i-1]==0 && newArray[i]==0 && newArray[i+1]==0){
                newArray[i] =1; //plant a flower
                count++; //yes you can plant
            }
        }

        if(n<=count){
            return true;
        }
        return false;
    }
};
