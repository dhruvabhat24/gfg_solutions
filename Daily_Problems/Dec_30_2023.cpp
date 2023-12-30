map<string,int>mp;
        string winnerName="";
        int max_vote=-1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto val: mp)
        {
           if(val.second>max_vote)
           {
               max_vote=val.second;
               winnerName=val.first;
           }
        }
        return {winnerName,to_string(max_vote)};
