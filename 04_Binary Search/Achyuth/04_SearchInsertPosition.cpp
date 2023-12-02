int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n=arr.size();
	 int i=0;
    int j=n-1;
	int count=n;
    while(i<=j){
        int mid=(i+j)/2;
		if(arr[mid]==m)return mid;
        if(arr[mid]>m){
			count=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
	return count;
}