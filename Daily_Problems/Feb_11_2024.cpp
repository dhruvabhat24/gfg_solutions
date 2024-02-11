vector<int> recamanSequence(int n)
    {
        set<int>st;
        st.insert(0);
        vector<int>ans(n,0);
        for (int i=1;i<n;i++)
        {
            if (ans[i-1]-i>0 &&st.find(ans[i-1]-i)==st.end()) 
            {
               st.insert(ans[i-1]-i);
                ans[i]=ans[i-1]-i;
            }
            else 
            {
                ans[i]=ans[i-1]+i;
                st.insert(ans[i-1]+i);
            }
            
        }
        return ans;
        
    }
