// Related ---> Medium/04_maxsumSubArr.cpp

long long maxSubarraySum(vector<int> arr, int n)
{
	long long maxi = 0;
	long long sum = 0;	
	for(auto ele:arr){
		if(sum<0){
			sum=ele;
		}else{
			sum+=ele;
		}
		maxi=max(maxi,sum);
	}
	return maxi;
}