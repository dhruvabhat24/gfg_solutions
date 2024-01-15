int solve(int index  , int total , vector<int>& cost , int n , vector<vector<int>>& dp){
        if(index>=n)
            return 0;
        if(dp[index][total]!= -1)
            return dp[index][total];
        int take = 0;
        if(cost[index]<=total)
            take = 1 + solve(index+1 , total+floor(cost[index]*9)/10 - cost[index] , cost , n , dp);
            
        int nottake = solve(index+1 , total , cost , n , dp);
        return dp[index][total] = max(take , nottake);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        int index = 0;
        vector<vector<int>> dp(n+1 , vector<int>(total+1 , -1));
        return solve(index , total , cost , n , dp);
    }
