bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        int x = 1;
        for(int i=0;i<n;i++)
        {
            if(i+x<n)
            {
                if(arr[i+x]>arr[i])
                    return 0;
            }
            if(i+x+1<n)
            {
                if(arr[i+x+1]>arr[i])
                    return 0;
            }
            x++;
        }
        return 1;
    }
