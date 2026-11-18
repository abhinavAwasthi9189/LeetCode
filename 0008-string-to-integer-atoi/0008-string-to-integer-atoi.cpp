class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        int p = 1;
        int x = 0;

        while(i<n&&s[i]==' '){i++;}
        if(i<n && (s[i]=='-' || s[i]=='+')){p=(s[i]=='+')?1:(-1);i++;}
        while(i<n){
            if(s[i]>='0'&& s[i]<='9'){
                if(x>(INT_MAX-(s[i]-'0'))/10){
                    return (p==-1)?INT_MIN:INT_MAX;
                }
                else{
                    x=(x*10)+(s[i]-'0');
                }
            }
            else{break;}
            i++;
        }
        return p*x;
    }
};