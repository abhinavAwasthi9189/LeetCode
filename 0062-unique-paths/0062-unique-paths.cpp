class Solution {
public:
    int uniquePaths(int m, int n) {
        return (m>n)?doC(m+n-2,(n-1)):doC(n+m-2,(m-1));
    }
    int doC(int n,int m){
        if(m<0 ||m>n)return 0;
        if(m==0 || m==n) return 1;

        if(m>n/2){m=n-m;}

        long long int res = 1;
        for(int i = 1;i<=m;i++){
            res = res*(n-i+1)/i;
        }
        return (int)res;
    }
};