int rowWithMax1s(vector<vector<int>> &arr, int n, int m)
{
    //    Write your code here.
    int cnt=0;
    int index=-1;
    for(int j=0;j<n;j++){
        int maxx=0;
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[j][mid]==1)high=mid-1;
            else low=mid+1;
        }
        maxx=m-low;
        if(maxx>cnt){
            cnt=maxx;
            index=j;
        }
    }
    return index;
}