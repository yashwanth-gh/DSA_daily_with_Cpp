void merge(int arr[],int l,int mid,int r){
       int temp[r];
       int low=l;
       int k=l;
       int high=mid+1;
       while(low<=mid && high<=r){
           if(arr[low]<=arr[high]){
               temp[k]=arr[low];
               low++;
               k++;
           }
           else{
               temp[k]=arr[high];
               high++;
               k++;
           }
       }
       while(low<=mid){
           temp[k]=arr[low];
               low++;
               k++;
       }
        while(high<=r){
            temp[k]=arr[high];
               high++;
               k++;
       }
       for(int i=l;i<=r;i++){
           arr[i]=temp[i];
       }
}
void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if(l==r){
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr,l,mid,r);
}
