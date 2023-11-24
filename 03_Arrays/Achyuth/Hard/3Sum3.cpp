//Brute Force Method
#include <iostream>
#include <vector>
#include <set>
using namespace std;  // Add this line to use types from the std namespace
vector<vector<int>> triplet(int n, vector<int> &arr) {
  // Changed the type to vector<int>
    set<vector<int>> st;
    for (int i = 0; i < n - 2; i++) {
        for (int j =i+1; j < n - 1; j++) {
            for (int k = j+1; k < n; k++) {

                if(i!=j && j!=k && k!=i && arr[i]+arr[k]+arr[j]==0){
                    vector<int> v={arr[i], arr[j], arr[k]};
                     sort(v.begin(),v.end());
                     st.insert(v);
                     break;
                }
            }
        }
    }
        vector<vector<int>> v1(st.begin(),st.end());
    return v1;
}
//Better Solution
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;  // Add this line to use types from the std namespace
vector<vector<int>> triplet(int n, vector<int> &arr) {
  // Changed the type to vector<int>
    set<vector<int>> st;
    for (int i = 0; i < n - 2; i++) {
            unordered_set<int> ust;
        for (int j =i+1; j < n ; j++) {
            int x=-arr[i]-arr[j];
            if(ust.find(x)!=ust.end()){
               vector<int> v={arr[i], arr[j], x};
                    sort(v.begin(),v.end());
                    st.insert(v);
           }
           ust.insert(arr[j]);
            
            }
        }
        
    
        vector<vector<int>> v1(st.begin(),st.end());
    return v1;
}
//Better with no Extra Space
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;  // Add this line to use types from the std namespace
vector<vector<int>> triplet(int n, vector<int> &arr) {
  // Changed the type to vector<int>
    set<vector<int>> st;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n - 2; i++) {
        if(i>0 &&arr[i]==arr[i-1])continue;
          int j=i+1;
          int k=n-1;
          while(j<k){
              if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    st.insert(temp);
                    j++;
                    k--;
              while(arr[j]==arr[j-1]){
                   j++;
              }
              while(arr[k]==arr[k+1]){
                  k--;
              }
            }
            else if(j<k && arr[i]+arr[j]+arr[k]>0){
                 k--;
            }
            else{
                if(j<k){
                  j++;           
              }
            }
              
          }
        }
        
    
        vector<vector<int>> v1(st.begin(),st.end());
    return v1;
}