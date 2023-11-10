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