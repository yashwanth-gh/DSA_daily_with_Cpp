int daysREq(vector<int> arr,int limit){
    int cap=0;
    int x=1;
    for(int i=0;i<arr.size();i++){
       if(cap+arr[i]>limit){
           x++;
           cap=arr[i];
       }else{
           cap+=arr[i];
       }
    }
    return x;
}
int findMax(vector<int> &v) {
    int maxi = v[0];
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}
int findSum(vector<int> &v) {
    int maxi=0;
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi+=v[i];
    }
    return maxi;
}
int leastWeightCapacity(vector<int> &weights, int d)
{
    int i=findMax(weights);
    int j=findSum(weights);
    while(i<=j){
        int mid =(i+j)/2;
        int x=daysREq(weights, mid);
        if(x<=d){
              j=mid-1;
        }
        else i=mid+1;
    }
    return i;
}
