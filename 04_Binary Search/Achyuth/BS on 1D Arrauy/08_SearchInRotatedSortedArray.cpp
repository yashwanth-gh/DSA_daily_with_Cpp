int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
     int i=0;
    int j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
		if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>=arr[i]){
             if(arr[i]<=k && arr[mid]>=k){
                 j=mid-1;
             }
             else{
                 i=mid+1;
             }
        }else{
           if(arr[j]>=k && arr[mid]<=k){
               i=mid+1;
           } else {
               j = mid - 1;
           }
        }
    }
    return -1;
}
