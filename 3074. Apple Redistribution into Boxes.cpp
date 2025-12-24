/*
You are given an array apple of size n and an array capacity of size m.

There are n packs where the ith pack contains apple[i] apples. There are m boxes as well, and the ith box has a capacity of capacity[i] apples.
Return the minimum number of boxes you need to select to redistribute these n packs of apples into boxes.
Note that, apples from the same pack can be distributed into different boxes.

Example 1:

Input: apple = [1,3,2], capacity = [4,3,1,5,2]
Output: 2
Explanation: We will use boxes with capacities 4 and 5.
It is possible to distribute the apples as the total capacity is greater than or equal to the total number of apples.
Example 2:

Input: apple = [5,5,5], capacity = [2,4,2,7]
Output: 4
Explanation: We will need to use all the boxes.

*/


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        // find the total sum
        int total =0;
        for(int i : apple){
            total += i;
        }

        
        // sort capacity-vector in reverse-order
        sort(capacity.begin(), capacity.end(), greater<int>());

        int count =0;

        // take first element --> check if >= --> found --> count++ and break.
        //                              <= count++    -->   sum-number 
        for(int c: capacity){
            if( c >= total && total>0){
                count++;
                break;
            }
            total = total - c;   // 20-9=11 , 11-9=2,   2-5 =0
            
            count++; //1+1
        }

        return count;
    }
};

