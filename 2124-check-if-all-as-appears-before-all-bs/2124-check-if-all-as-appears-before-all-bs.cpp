class Solution {
public:
    bool checkString(string s) {
        long long int i =0;
        while(s[i]=='a'){
            i++;
        }
        while(s[i]=='b'){
            i++;
        }
        return (s.length()==i)?true:false;
    }
};