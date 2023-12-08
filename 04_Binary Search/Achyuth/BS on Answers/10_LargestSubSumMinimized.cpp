int Maxsum(vector<int> arr,int x){
    int n=arr.size();
    int cnt=1;
    int y=0;
    for(int i=0;i<n;i++){
        if(y+arr[i]>x){
            y=arr[i];
            cnt++;
        }else y+=arr[i];
    }
    return cnt;
}
int largestSubarraySumMinimized(vector<int> arr, int k) {
    // Write Your Code Here
    int n=arr.size();
    int maxx=arr[0];
    int sum=arr[0];
    for(int i=1;i<n;i++){
        sum+=arr[i];
          if(maxx<arr[i]){
              maxx=arr[i];
          }
    }
    int i=maxx;
    int j=sum;
    while(i<=j){
        int mid=(i+j)/2;
         int x=Maxsum(arr, mid);
         if(x>k)i=mid+1;
         else j=mid-1;

    }  
    return i;
}