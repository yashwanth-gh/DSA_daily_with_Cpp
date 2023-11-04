//Brute force:-

// void reverse(int n,vector<int> &v,vector<int> &nums){
// if(n==0)return;
// v.push_back(nums[n-1]);
// reverse(n-1,v,nums);
// }

// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     vector<int>v;
//     reverse(n,v,nums);
//     return v;
// }

// Optimised approach:-

void reverse(vector<int> &nums,int l,int r){
if(l>=r)return;
swap(nums[l],nums[r]);
reverse(nums,l+1,r-1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    reverse(nums,0,n-1);
    return nums;
}