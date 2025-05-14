class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // using Sliding Window
        int first = 0, second =0;
        double sum =0, avg =0;

        // Add upto K --> make a fixed size window
        for(int i=0; i<k; i++){
            sum += nums[i];
        }

        avg = sum/k;
        double Ans = avg; //taking a copy of the average.


        // increment and decrement the window size
        for(int i=k; i<nums.size(); i++){
            sum += nums[i]; //increment
            sum -= nums[i-k]; //leaves the first element /decrement

            avg = sum/k;
            Ans = max(Ans, avg); //previous avg vs new-avg
        }

        return Ans;
        
    }
};
