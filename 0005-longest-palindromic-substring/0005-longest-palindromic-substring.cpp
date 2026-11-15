class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        std::string x = "";
        x.push_back(s[0]);
        for(int i=0;i<n;i++){
            std::string x_ = "";
            if(s[i]==s[i+1]){
                x_=palindromeE(s,i);
                std::string x__= palindromeO(s,i);
                x_=(x_.length()>x__.length())?x_:x__;
            }
            else{
                x_=palindromeO(s,i);}
            if(x_.length()>x.length()){
                x=x_;
            }
        }
        return x;
    }
    
    string palindromeO(string s,int i){
        int x=1;
        std::string s_ ="";
        s_.push_back(s[i]);
        while(i-x>=0&&i+x<s.length()){
            if(s[i-x]==s[i+x]){
                s_.push_back(s[i+x]);
                s_.insert(0,1,s[i+x]);
            }
            else{
                break;
            }
            x+=1;
        }
        return s_;
    }string palindromeE(string s,int i){
        int x=1;
        std::string s_ ="";
        s_.push_back(s[i]);
        s_.push_back(s[i]);
        while(i-x>=0&&i+1+x<s.length()){
            if(s[i-x]==s[i+1+x]){
                s_.push_back(s[i+1+x]);
                s_.insert(0,1,s[i-x]);
            }
            else{
                break;
            }
            x+=1;
        }
        return s_;
    }
};