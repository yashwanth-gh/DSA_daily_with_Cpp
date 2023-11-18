class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=i){
               return i;
           }
        }
        return nums.size();
    }
};
//optimal solution
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int xor1=0,xor2=0;
    for(int i=0;i<N-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;

}