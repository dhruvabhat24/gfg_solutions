map<int,int> m;
        for(int i=0;i<N;i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;
