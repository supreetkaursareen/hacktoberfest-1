class Solution {
int count=0;
private:
    int solve(int x,int y,int m,int n){
        vector<int>dp(n,1);
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dp[j]=dp[j]+dp[j+1];
        }   
        }
        return dp[0];
        
    }
    
public:
    int uniquePaths(int m, int n) {
    int x=0,y=0;
    return solve(x,y,m,n);
    }
};
