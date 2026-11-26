class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> n;
        n.reserve(nums1.size()+nums2.size());
        n.insert(n.end(),nums1.begin(),nums1.end());
        n.insert(n.end(),nums2.begin(),nums2.end());
        std::sort(n.begin(),n.end());
        int m =n.size();
        if(m%2==1){
            return (double)n[m/2];
        }
        else{
            return ((double)n[m/2]+(double)n[m/2-1])/2;
        }
    }
};