long long int sumArr[n] = {0};
        
        sumArr[0] = a[0];
        
        for (int i = 1; i < n; i++)
        {
            auto SumUptoN = sumArr[i-1] + a[i];
            
            auto maxx = max(SumUptoN, a[i]);
            
            sumArr[i] = maxx;
        }
        
        long long int sumK = 0;
        
        long long int result = 0;
        
        for (int i = 0; i < k; i++)
        {
            sumK += a[i];
        }
        result = sumK;

        for (int i = k; i < n; i++)
        {
            sumK += a[i];
            sumK -= a[i - k];
            
            long long int possibleSum = sumK + sumArr[i - k];
            
            long long int resulHere = max(possibleSum, sumK);
            
            result = max(result, resulHere);
        }
        
        return result;
