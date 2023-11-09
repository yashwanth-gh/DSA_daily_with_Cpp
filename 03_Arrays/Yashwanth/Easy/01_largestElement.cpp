// -----------------BRUTE FORCE--------------------

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
// ------------------ OPTIMAL --------------------

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int largest =arr[0];
   for(auto ele:arr){
       if(ele>largest)largest=ele;
   }
   return largest;
}
