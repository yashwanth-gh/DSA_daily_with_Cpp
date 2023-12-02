int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	 int i=0;
    int j=n-1;
	int count=n;
    while(i<=j){
        int mid=(i+j)/2;
        else if(arr[mid]>=x){
			count=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
	return count;
}
