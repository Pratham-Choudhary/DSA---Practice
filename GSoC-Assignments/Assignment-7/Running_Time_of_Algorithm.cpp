int insertionSortCount(vector <int>  arr) {
    int n = arr.size();
    int count=0;
    for(int i=1;i<n;i++){
        int sorted = arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>sorted){
                arr[j+1]=arr[j];
                count++;
                if(j==0)
                    arr[j]=sorted;
            }
            else{
                arr[j+1]=sorted;
                j=-1;
            }
        }
    }
    return count;
}
