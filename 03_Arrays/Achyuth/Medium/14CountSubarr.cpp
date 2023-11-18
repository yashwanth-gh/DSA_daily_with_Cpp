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