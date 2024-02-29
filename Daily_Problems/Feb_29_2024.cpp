 long long sumBitDifferences(int arr[], int n) {
        long long ans=0;
        
        
        for(int i=0;i<32;i++){
            
            long long cntOnes=0,cntZero=0;
            
            for(int j=0;j<n;j++){
                
                if(arr[j]%2)
                cntOnes++;
                
                else
                cntZero++;
                
                arr[j]=arr[j]/2;
                
            }
            ans +=cntOnes*cntZero*2;
            
        }
        return ans;
    }
