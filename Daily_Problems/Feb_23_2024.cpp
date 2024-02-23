int dp[100001][2][3];
        
        int maxProfit(vector<int>&price){
            //Write your code here..
            
            int n = price.size();
            memset(dp, 0, sizeof(dp));
            
            for(int i=n-1; i>=0; i--){
                for(int canbuy =0; canbuy<=1; canbuy++){
                    for(int count=1; count<=2; count++){
                        int ans = 0;
                        if(canbuy){
                            ans = -price[i]+dp[i+1][0][count];
                            ans = max(ans, dp[i+1][1][count]);
                        }
                        else{
                            ans = price[i] + dp[i+1][1][count-1];
                            ans = max(ans, dp[i+1][0][count]);
                        }
                        
                        dp[i][canbuy][count] = ans;
                    }
                }
            }
            
            return dp[0][1][2];
        }
