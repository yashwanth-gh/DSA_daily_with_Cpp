//BruteForce
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n=a.size();
    int count=0;
    for(int i=0;i<n;i++){
        int xor1=0;
         for(int j=i;j<n;j++){
             xor1=xor1^a[j];
             if(xor1==b){
                 count++;
             }

         } 
    }
    return count;
}
//Optimal Solution
#include <map>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n=a.size();
    int count=0;
    int xr=0;
    map<int,int> mp;
    mp[xr]++;
    for(int i=0;i<n;i++){
       xr=xr^a[i];
       int x=xr^b;
       count+=mp[x];
       mp[xr]++;
    }
    return count;
}