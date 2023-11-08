#include <bits/stdc++.h> 
void bubbleSort(int arr[], int n)
{   
        if(n==1){
        return;
    } 
    bool swapp=false;
   for(int j= 0; j<n-1; j++)
   {

           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
               swapp=true;
           }
   }
   if(swapp==false){
       return;
   }
   bubbleSort(arr, n-1);

}
