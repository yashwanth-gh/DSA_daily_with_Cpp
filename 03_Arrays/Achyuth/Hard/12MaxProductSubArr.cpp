#include<vector>

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int n=arr.size();
	int maxx=0;
	for(int i=0;i<n;i++){
		int sum=1;
		for(int j=i;j<n;j++){
           sum*=arr[j];
		   maxx=max(maxx,sum); 
		}
	}
	return maxx;
}