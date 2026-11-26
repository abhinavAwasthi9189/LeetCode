class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==0){
            std::vector<int> V;
            return V;
        }
        if(n==1){
            std::vector<int> V;
            V.push_back(0);
            V.push_back(1);
            return V;
        }

        std::vector<int> V = grayCode(n-1);
        int x = 1;
        x=x<<(n-1);
        for(int i = V.size()-1;i>=0;i--){
            V.push_back(V[i]|x);
        }
        return V;
    }
};