void reverse(vector<int> &nums,int str,int end){
   if(str>end){
    return;
   }
   int temp=nums[str];
   nums[str]=nums[end];
   nums[end]=temp;
   reverse(nums,str+1,end-1);
}
  
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    reverse(nums,0,n-1);
    return nums;

}
