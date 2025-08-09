class Solution {
  public:
    int solve(int buy , int ind , int k , vector<int>&prices, vector<vector<vector<int>>>&dp){
        if(ind >=prices.size()){
            return 0;
        }
        if(k==0){
              return 0;
        }
        if(dp[ind][buy][k]!=-1){
            return dp[ind][buy][k];
        }
        int pick=0;
        int notpick=0;
        if(buy){
            pick=-prices[ind]+solve(!buy , ind
            +1,k,prices,dp);
             notpick=solve(buy,ind+1,k,prices,dp);
            return dp[ind][buy][k] = max(pick,notpick); 
        }
        else{
            
            pick=+prices[ind]+solve(!buy , ind
            +1,k-1,prices,dp);
             notpick=solve(buy,ind+1,k,prices,dp);
            return dp[ind][buy][k]= max(pick,notpick); 
        }
        return 0;
    }
    int maxProfit(vector<int>& prices, int k) {
        // code here
        int n =prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(1,0,k,prices,dp);
        
        
        
        
    }
};
