int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int count=0;
    for(int i=0;i<arr.size();i++){
        int sum=arr[i];
        if(sum==k){
            count++;
        }
        for(int j=i+1;j<arr.size();j++){
              sum+=arr[j];
              if(sum>k){
                  break;
              }else if(sum==k){
                 count++;
              }
        }
    }
    return count;
}
//Optimal Solution
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
     int n = arr.size();
    int prefix=0;
    int res = 0;
     map<int,int> mp;
     mp[prefix]++;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        res+=mp[prefix-k];
        mp[prefix]++;
    }

    return res;
}