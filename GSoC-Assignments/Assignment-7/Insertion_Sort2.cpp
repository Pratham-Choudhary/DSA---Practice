void insertionSort2(int n, vector<int> arr) {
for(int i=1 ; i<n ; i++){
        int r=arr[i];
        for(int j=i-1 ; j>=0 ; j--)
        {
            if(arr[j]>r)
            {
                arr[j+1]=arr[j];
                if(j==0)
                    arr[j]=r;
            }
            else
            {
                arr[j+1]=r;
                j=-1;
            }
        }
        for(int t=0;t<n;t++)
            cout<<arr[t]<<" ";
        cout<<endl;
    }
}
