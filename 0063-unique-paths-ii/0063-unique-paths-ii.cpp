class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<long long>> dp(n,vector<long long>(m,0));
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==(n-1)&&j==(m-1)){
                    if(obstacleGrid[i][j]==1){return 0;}
                    dp[i][j]=1;
                    std::cout << obstacleGrid[i][j]<<  '\n';
                    continue;
                }
                else if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                    std::cout << obstacleGrid[i][j]<<  '\n';
                    continue;
                }
                else{
                    if(i==(n-1)){
                        dp[i][j]+=dp[i][j+1];
                    }
                    else if(j==(m-1)){
                        dp[i][j]+=dp[i+1][j];
                    }
                    else{
                        dp[i][j]+=dp[i][j+1]+dp[i+1][j];
                    }
                }
            }
        }
        return (int)dp[0][0];
    }
};