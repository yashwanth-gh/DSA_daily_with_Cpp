#include <bits/stdc++.h> 
// -----------------------BRUTE FORCE and Optimal ----------------------
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int firstEle = arr[0];
    arr.erase(arr.begin());
    arr.push_back(firstEle);
    return arr;
}
