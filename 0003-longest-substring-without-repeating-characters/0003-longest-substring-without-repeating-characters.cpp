class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0){return 0;}
        std::set<char> st;
        int Lmax=1;
        int i=0;
        int j=0;
        while(j<n){
            if(st.count(s[j])){
                Lmax = Lmax>j-i?Lmax:j-i;
                st.erase(s[i++]);
            }
            else{
                st.insert(s[j++]);
            }
        }
        return Lmax>n-1-i?Lmax:n-i;
    }
};