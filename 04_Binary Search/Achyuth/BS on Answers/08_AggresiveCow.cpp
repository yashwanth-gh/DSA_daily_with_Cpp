bool cowcount(vector<int> &arr,int k,int x){
    int cnt=1;int last=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last>=x){
            cnt++;
            last=arr[i];
        }
    }
    if(cnt>=k)return true;
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int i=1;
    int j=stalls[stalls.size()-1]-stalls[0];
    while(i<=j){
        int mid=(i+j)/2;
        if(cowcount(stalls, k, mid))i=mid+1;
        else j=mid-1;
    }
    return j;
}