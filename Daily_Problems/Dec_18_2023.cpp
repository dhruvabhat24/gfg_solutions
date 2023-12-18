class Solution{
    public:
    int gameOfXor(int N , int A[]) {
        // code here
        int c=0;
        if(N&1){
            for(int i=0; i<N; i+=2){
                c=c^A[i];
            }
        }
        return c;
    }
};