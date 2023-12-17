class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
        vector<int> record(3,0);
	    int maxSum=0;
	    for(int i=0; i<n; ++i){
	        int sum=max(record[0]+arr[i], record[1]+arr[i]);
	        record[0]=record[1];
	        record[1]=record[2];
	        record[2]=sum;
	        maxSum=max(sum, maxSum);
	    }
	    return maxSum;
	}
};