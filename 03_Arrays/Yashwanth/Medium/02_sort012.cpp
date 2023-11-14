#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int zeros=0;
    int ones=0;
    int twos=0;
    for(auto ele:arr){
        if(ele == 0){
            zeros++;
        }else if (ele == 1){
            ones++;
        }else{
            twos++;
        }
    }
    for(int i = 0;i<n;i++){
        if(zeros != 0){
            arr[i]=0;
            zeros--;
            continue;
        }else if(ones != 0){
            arr[i]=1;
            ones--;
            continue;
        }else{
            arr[i]=2;
            twos--;
        }
    }
}
