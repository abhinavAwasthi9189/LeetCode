class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        std::unordered_set<int> L(nums.begin(),nums.end());
        int longest = 0;
        for(int x : L){
            int lon = 1;
            if(L.find(x-1)==L.end()){
                int t =x+1;
                while(L.find(t)!=L.end()){
                    lon++;t++;
                }
            }
            longest = std::max(longest,lon);
        }
        return longest;
    }
};