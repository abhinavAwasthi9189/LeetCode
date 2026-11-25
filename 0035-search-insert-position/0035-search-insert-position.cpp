class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int e = nums.size()-1;int s = 0;
        while(s!=e){
            int m = s+(e-s)/2;
            if(nums[m]==target){return m;}
            else if(nums[m]<target){
                s = m+1;
            }
            else{
                e = m;
            }
        }
        return (nums[s]<target)?s+1:s;
    }
};