long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long max=0;
    for(int i=0;i<n;i++){
        long long count=0;
        for(int j=i;j<n;j++){
             count+=arr[j];
             if(count>max){
                 max=count;
             }
        }
    }
    return max;
}
//there is  kadans algo to solve it but i used bruteforce approach to solve it
