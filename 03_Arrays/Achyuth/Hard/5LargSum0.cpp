#include<vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int count=0;
	for(int i=0;i<arr.size();i++){
		int sum=0;
		int x=0;
		for(int j=i;j<arr.size();j++){
             sum+=arr[j];
			 if(sum==0){
               x=j-i+1;
			 }
       
		}
		count=max(x,count);
	}
	return count;
}