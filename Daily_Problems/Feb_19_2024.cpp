int minValue(string s, int k){
        map<char,int>mp;
        for(auto &c:s)mp[c]++;
        multiset<int>m;
        for(auto &c:mp){m.insert(c.second);}
        while(k--){
            auto it=m.end();
            --it;
            int x=*it-1;
            m.erase(it);
            m.insert(x);
        }
        int ans=0;
        for(auto &c:m){ans+=(c*c);}
        return ans;
    }
