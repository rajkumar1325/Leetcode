class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // create a min_priority queue
        priority_queue<int, vector<int>, greater<int>> minHp;

        // Store all the element inside the heap.
        for(int i : nums){
            minHp.push(i);
            if(minHp.size()>k){ //create a fixed size, so that we can remove the kth element.
                minHp.pop();
            }
        }

        return minHp.top();
    }
};
