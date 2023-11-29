// did not run all cases

#include<bits/stdc++.h>
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.

    map<int,int>mpp;
    int i=0;
    int j=1;
    for(auto ele:a){
        if(ele>0 && i<a.size()){
            mpp[ele] = i;
            i+=2;
        }else if(ele<0 && j<a.size()){
            mpp[ele] = j;
            j+=2;
        }
    }
    for(auto ele:mpp){
        a[ele.second] = ele.first;
    }
    return a;
 
}

//! TC: O(N*LogN)+O(N) ~ approx