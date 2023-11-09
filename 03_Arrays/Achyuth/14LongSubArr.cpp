#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
     int start=0;
    for(int i=0;i<nums.size();i++){
        long long sum=0;
       for(int j=i;j<nums.size();j++){
           sum+=nums[j];
           if(sum==k){
               start=max(start,j-i+1);
           }
       }
    }
    return start;
}