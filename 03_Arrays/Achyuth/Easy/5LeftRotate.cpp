#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int x=arr[0];
    arr.erase(arr.begin());
    arr.push_back(x);
    return arr;
}


//optimal solution
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int x=arr[0];
    for(int i=1;i<n;i++){
        arr[i]=arr[i-1];
    }
    arr[n-1]=x;
    return arr;
}