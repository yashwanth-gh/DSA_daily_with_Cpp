//! SLIDING WINDOW APPROACH

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long left=0;
    long long right=0;
    long long n = a.size();
    long long sum = 0;
    long long maxi=0;
    while(right<n){
        sum+=a[right];
        while(left<=right && sum>k){
            sum-=a[left++];
        }
        if(sum == k )
            maxi=max(maxi,(right-left)+1);
        right++;
    }
        return maxi;
    }