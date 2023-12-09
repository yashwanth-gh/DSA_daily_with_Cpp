int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int sum = 0;
    int count = 0;
    int n = arr.size();
    map<int,int>mpp;
    mpp[0] = 1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int rem = sum-k;
        count+=mpp[rem];
        mpp[sum]+=1;  

    }
    return count;
}