class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        std::set<std::vector<int>> T;
        std::vector<int> v;
        T.insert(v);
        for(int i =0;i<nums.size();i++){
            auto curr = T;
            for(auto x :curr){
                if(x.size()==0){
                    std::vector<int> v;
                    v.push_back(nums[i]);
                    T.insert(v);
                    v.clear();
                }
                else{
                    std::vector<int> v;
                    v.insert(v.end(),x.begin(),x.end());
                    v.push_back(nums[i]);
                    T.insert(v);
                    v.clear();
                }
            }
        }
        return std::vector<std::vector<int>>(T.begin(),T.end());
    }
};