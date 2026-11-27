class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        int L[n];
        for(int i =0;i<n;i++){
            L[i]=0;
            if(s[i]=='0'){
                if(i==0){return 0;}
                else if(s[i-1]!='1'&&s[i-1]!='2'){return 0;}
            }
        }
        L[n-1]=(s[n-1]=='0')?0:1;
        for(int i =n-2;i>=0;i--){
            if(s[i]=='1'){
                if(i==n-2){
                    L[i]=L[i+1]+1;
                }
                else{
                    L[i]=L[i+1]+L[i+2];
                }
            }
            else if(s[i]=='2'&&s[i+1]<'7'){
                if(i==n-2){
                    L[i]=L[i+1]+1;
                }
                else{
                    L[i]=L[i+1]+L[i+2];
                }
            }
            else if(s[i]=='0'){
                L[i]=0;
            }
            else{
                L[i]=L[i+1];
            }
        }
        return L[0];
    }
};