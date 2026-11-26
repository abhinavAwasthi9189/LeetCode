class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        if(nums.size()==1){return nums[0];}
        long long int maximus = nums[0];
        for(int i =1;i<nums.size();i++){
            nums[i] = (nums[i]==1)?nums[i-1]+1:0;
            if(nums[i]>maximus){maximus=nums[i];}
        }
        return maximus;
    }
};