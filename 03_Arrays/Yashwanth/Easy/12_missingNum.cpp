
int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n=arr.size();	
	for(int i=0;i<n-2;i=i+2){
		if(arr[i] != arr[i+1])return arr[i];
	}
		return arr[n-1];

}