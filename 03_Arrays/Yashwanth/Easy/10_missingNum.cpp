class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total  = (n*(n+1))/2; 
        int actualTotal = 0;
        for(auto ele:nums)
            actualTotal += ele;
        if(actualTotal == total)return 0;
        return total-actualTotal;
    }
};