vector<int>ans;
           size_t pos = txt.find(pat);
           while(pos!=string::npos)
           {
               ans.push_back(pos+1);
               pos = txt.find(pat,pos+1);
           }
           if(ans.empty())
           {
               ans.push_back(-1);
           }
           return ans;
