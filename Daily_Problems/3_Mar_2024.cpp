int firstElementKTime(int n, int k, int arr[])
    {
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(++m[arr[i]] >=k) return arr[i];
        }
        return -1;
    }
