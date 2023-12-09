int Minpaint(vector<int> &arr,int maxx){
    int n=arr.size();
    int cnt=1;
    int paint=-0;
    for(int i=0;i<n;i++){
          if(paint+arr[i]>maxx){
              cnt++;
              paint=arr[i];
          }
          else paint+=arr[i];
    }
    return cnt;
}
int findLargestMinDistance(vector<int> &arr, int k)
{
    //    Write your code here.
    int n=arr.size();
    if(n<k)return -1;
    int maxx=arr[0];
    int sum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxx)maxx=arr[i];
        sum+=arr[i];
    }
    int i=maxx;
    int j=sum;
    while(i<=j){
       int mid=(i+j)/2;
       int cnt=Minpaint(arr, mid);
       if(cnt>k)i=mid+1;
       else j=mid-1;
    }
    return i;
}
