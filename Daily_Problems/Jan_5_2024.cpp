long long int mod = 1e9 + 7;
        
        if(N==1){
            return 4;
        }
        
        if(N==2){
            return 9;
        }
        
        int prev_two = 2, prev_one = 3, curr = 0;
        
        for (int i = 3; i <= N; i++) {
            curr = (prev_one + prev_two + mod) % mod ;
            prev_two = prev_one ;
            prev_one = curr;
        }
        
         long long total = ((curr%mod) * (curr%mod)) % mod;
        
        return total;
