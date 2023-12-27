 public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        vector<int> ans;
        int n=matrix.size();
        //to print upper diagonal
        for(int ind=0; ind<n; ind++){
            for(int j=0; j<=ind; j++){
                int val=matrix[j][ind-j];
                ans.push_back(val);
            }
        }
        
        for(int ind=1; ind<n; ind++){
            int cnt=n-1;
            for(int j=ind; j<n; j++){
                int num=matrix[j][cnt--];
                ans.push_back(num);
            }
        }
        return ans;
    }
