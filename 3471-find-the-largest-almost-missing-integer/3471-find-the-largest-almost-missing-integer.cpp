class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k==nums.size()){return *std::max_element(nums.begin(),nums.end());}
        if(k==1){
            return maxicase(nums);
        }
        if(notfound(nums[0],nums)&&notfound(nums[nums.size()-1],nums)){
            return std::max(nums[0],nums[nums.size()-1]);
        }
        else if(notfound(nums[0],nums)){
            return nums[0];
        }
        else if(notfound(nums[nums.size()-1],nums)){
            return nums[nums.size()-1];
        }
        else{
            return -1;
        }
    }
    bool notfound(int k, vector<int>& nums){
        bool x = false;
        for(int i=0; i< nums.size();i++){
            if(nums[i]==k){
                if(x){return false;}
                x = true;
            }
        }
        return true;
    }
    int maxicase(vector<int>& nums){
        std::sort(nums.begin(),nums.end(),std::greater<int>());
        int n = nums.size();
        for(int i = 0;i<n;i++){
            bool diffFromPrev = (i == 0 || nums[i] != nums[i-1]);
            bool diffFromNext = (i == n-1 || nums[i] != nums[i+1]);
            if(diffFromPrev && diffFromNext){
                return nums[i];
            }
        }
        return -1;
    }
};