#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<long long,int>mpp;
    long long sum=0;
    long long rem=0;
    int maxi=0;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
        if(sum==k)maxi=i+1;
        rem = sum-k;
        if(mpp.find(rem)!= mpp.end()){
            maxi=max(maxi,i-mpp[rem]);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    return maxi;
    }
