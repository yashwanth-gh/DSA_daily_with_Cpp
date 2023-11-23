//Brute Force Method
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(a[i]>a[j] ){
                 count++;
             }
        }
    }
    return count;
}
//Merge Sort Method
int merge(vector<int>&arr,int l,int mid,int r){
       int count=0;
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
               count+=mid-low+1;
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
       return count;
}
int mergeSort(vector<int>&arr, int l, int r) {
    // Write Your Code Here
    int cnt=0;
    if(l==r){
        return cnt;
    }
    int mid=(l+r)/2;
    cnt+=mergeSort(arr, l, mid);
    cnt+=mergeSort(arr, mid+1, r);
    cnt+=merge(arr,l,mid,r);
    return cnt;
}
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
   
    return mergeSort(a, 0, n-1);
}