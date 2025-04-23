class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // concatinating both arrays
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        //sort the array
        sort(nums1.begin(), nums1.end());

        double median;
        int n = nums1.size();

        double middle = nums1.size()/2;

    // just go through simple logic.
    /*    if array.size() --> even , median = (middle + middle-1)/2
        else if odd --> return middle element.

    */    if(n%2 ==0){ //even
            median = double((nums1[middle] + nums1[middle-1] ))/2;
        }
        else{
            median = nums1[middle];
        }

        return median;

    }
};
