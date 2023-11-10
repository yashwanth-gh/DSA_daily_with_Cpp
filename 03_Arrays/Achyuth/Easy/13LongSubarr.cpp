int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here

    int start=0;
    for(int i=0;i<a.size();i++){
        long long sum=0;
       for(int j=i;j<a.size();j++){
           sum+=a[j];
           if(sum==k){
               start=max(start,j-i+1);
           }
       }
    }
    return start;
}