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

// --optimal approach

#include<bits/stdc++.h>
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int>ans(a.size());
int pos=0;
int neg=1; 
for(auto ele:a){
    if(ele<0){
        ans[neg] = ele;
        neg+=2;
    }else{
        ans[pos] = ele;
        pos+=2;
    }
}
    return ans;
 
}