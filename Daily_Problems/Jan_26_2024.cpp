static bool compare(const Item &a,const Item &b){
            return (a.value/(a.weight*1.0))>(b.value/(b.weight*1.0));
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        stable_sort(arr, arr+n, compare);
        int i;
        double profit=0.0;
        
        for(i=0; i<n; i++){
            if(W>=arr[i].weight){
                W-=arr[i].weight;
                profit+=arr[i].value;
            }
            else{
                profit+=(arr[i].value)/(arr[i].weight*1.0)*(W);
                W=0;
                break;
            }
        }
        return profit;
    }
