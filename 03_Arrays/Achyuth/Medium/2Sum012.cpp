#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            v1.push_back(0);
        }
        else  if(arr[i]==1){
            v2.push_back(1);
        }
        else{
             v3.push_back(2);
        }
    }
    arr.clear();
    for(int i=0;i<v1.size();i++){
        arr.push_back(0);
    }
     for(int i=0;i<v2.size();i++){
        arr.push_back(1);
    }
    for(int i=0;i<v3.size();i++){
        arr.push_back(2);
    }
}
//Better Solution
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
     int one=0,two=0,zero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
           zero++;
        }
        else  if(arr[i]==1){
            one++;
        }
        else{
             two++;
        }
    }
    for(int i=0;i<zero;i++){
        arr[i]=0;
    }
     for(int i=zero;i<zero+one;i++){
         arr[i]=1;
    }
    for(int i=zero+one;i<n;i++){
         arr[i]=2;
    }
}

//Optimal Solution   (Dutch National Flag algorithm)
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
