
#include <bits/stdc++.h> 
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    map<int,int>mpp;
    int rem=0;
    for(int i=0;i<n;i++){
       rem = target-book[i];
       if(mpp.find(rem)!=mpp.end()){
         return "YES";
       }
       if (mpp.find(book[i]) == mpp.end()) {
         mpp[book[i]] = 1;
       }
    }
    return "NO";
}
