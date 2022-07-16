void insertionSort1(int n, vector<int> arr) {
    if(n==0)
        return;
    if(n==1)
        cout<<arr[n-1]<<endl;
    int r=arr[n-1];
    int i=n-2;
    while(i>=0){
        if(arr[i]>=r)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i+1]=r;
            i=-1;
        }
        for(int j=0 ; j<n ; j++)
            cout<<arr[j]<<" ";
        cout<<endl;
        if(i==0)
        {
            arr[i]=r;
            for(int j=0;j<n;j++)
                cout<<arr[j]<<" ";
            cout<<endl;
        }
        i--;
    }
}
