class Solution {
public:
    int maxArea(vector<int>& height) {

        // first make pointers
        int left = 0;                  // start
        int right = height.size() - 1; // end

        // make it global, as we have to return it
        int area = 0;

        while (left < right) {
            int heigh = min(height[left], height[right]);
            int width = right - left;
            area = max(area, (heigh * width)); //calculate maximum area in each iteration

            if (height[left] < height[right]) {
                left++;
            } 
            else {
                right--;
            }
        }

        return area;
    }
};
