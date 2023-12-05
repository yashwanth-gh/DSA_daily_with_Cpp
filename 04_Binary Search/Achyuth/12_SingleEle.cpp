int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n=arr.size();
  if(n==1) return arr[0];
	if(arr[0]!=arr[1]){
		return arr[0];
	}
	if(arr[n-1]!=arr[n-2]){
		return arr[n-1];
	}
	int i=1;
	int j=n-2;
	while(i<=j){
        int mid=(i+j)/2;
		if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
			return arr[mid];
		}
		if(mid%2==1 && arr[mid-1]==arr[mid]){
			i=mid+1;
		}
		else if(mid%2==0 && arr[mid]==arr[mid+1]){
			i=mid+1;
		}
		else if(mid%2==1 && arr[mid]==arr[mid+1]){
			j=mid-1;
		}
		else{
			j=mid-1;
		}
	}
}