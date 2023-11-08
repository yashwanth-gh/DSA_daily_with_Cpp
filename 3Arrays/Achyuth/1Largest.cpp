#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int x=arr[0];
    for(int i=1;i<n;i++){
         if(x<arr[i]){
             x=arr[i];
         }
    }
    return x;
}
