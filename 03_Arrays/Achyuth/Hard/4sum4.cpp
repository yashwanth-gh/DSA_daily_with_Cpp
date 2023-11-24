//Brute Fotce
#include <iostream>
#include <vector>
#include <set>
using namespace std;  
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    int n=nums.size();
    set<vector<int>> st;
    for (int i = 0; i < n - 3; i++) {
        for (int j =i+1; j < n - 2; j++) {
            for (int k = j+1; k < n-1; k++) {
            for(int l=k+1;l<n;l++){
           if(nums[i]+nums[k]+nums[j]+nums[l]==target){
                    vector<int> v={nums[i], nums[j], nums[k],nums[l]};
                     sort(v.begin(),v.end());
                     st.insert(v);
                     break;
                 }
               }      
            }
        }
    }
        vector<vector<int>> v1(st.begin(),st.end());
    return v1;
}
//Better Solution
