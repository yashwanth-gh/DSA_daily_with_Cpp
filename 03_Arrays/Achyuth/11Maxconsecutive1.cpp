class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
              while(i<nums.size() && nums[i]==1){
                  count++;
                  i++;
              }
             x= max(count,x);
             count=0;
        }
        return x;
    }
};