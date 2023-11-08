#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int x=arr[0];
    arr.erase(arr.begin());
    arr.push_back(x);
    return arr;
}