long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxi=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
        maxi=max(maxi,sum);
        }
    }
    return maxi;
}
// ******************* Optimized *************************** 
// Algorithm KADANE'S ALGO :