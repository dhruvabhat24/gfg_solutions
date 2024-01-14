vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        map<vector<int> , bool>mp ; 
        int i,j ; 
        vector<int>ans ; 
        for(i=0;i<M;i++){
            vector<int>temp ; 
            for(j=0;j<N;j++){
                temp.push_back(matrix[i][j]) ; 
            }
            if(mp.find(temp) == mp.end()){
                mp[temp] = true ; 
            }else{
                ans.push_back(i) ; 
            } 
            
        }return ans ; 
        
    }
