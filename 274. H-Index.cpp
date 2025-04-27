class Solution {
public:
    int hIndex(vector<int>& citations) {
        int index = 0;

        sort(citations.rbegin(), citations.rend()); // sort in decreasing order

        // Iterate over it 
        for (int i = 0; i < citations.size(); i++) {

            // update until we find the smallest element
            if (citations[i] >= i + 1) {
                index = i + 1;
            }

            // It all done no need to check the number that is less 
            else{
                break;
            }
            
        }
        return index;
    }
};


//After reversing = [6, 5, 3, 1, 0]
