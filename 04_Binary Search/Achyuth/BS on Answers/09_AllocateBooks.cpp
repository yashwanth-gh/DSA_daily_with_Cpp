
int NoofStd(vector<int> arr,int maxx){
        int n=arr.size();
        int x=0;
        int count=1;
        for(int j=0;j<n;j++){
           if(x+arr[j]>maxx){
               x=arr[j];
               count++;
           }else{
               x+=arr[j];
           }
        }
        return count;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n)return -1;
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
        int x=NoofStd(arr,mid);
        if(x>m){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return i;
}