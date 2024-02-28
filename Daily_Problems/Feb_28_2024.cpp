int DivisibleByEight(string s){
        //code here
        // int a=stoi(s);
        int a=0;
        int n=s.size();
        for(int i=max(0,n-3);i<n;i++){
            a=a*10+(s[i]-'0');
        }
        if(a%8==0)return 1;
        return -1;
    }
