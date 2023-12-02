int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	 int i=0;
    int j=n-1;
	int count=n;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]>x){
			count=mid;
            j=mid-1;
        }
        else{

            i=mid+1;
        }
    }
	return count;
}