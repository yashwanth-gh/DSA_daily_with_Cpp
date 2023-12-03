int findMin(vector<int>& arr)
{
	// Write your code here.
	int n=arr.size();
	int i=0;
	int j=n-1;
	int ans=arr[0];
	while(i<=j){
        int mid=(i+j)/2;
		if(arr[mid]>=arr[i] && arr[mid]<=arr[j]){ //here it is used 
			return min(ans,arr[i]);                //if it is sorted on both side of mid then
		}                                        //return arr[low]
		if(arr[mid]>=arr[i]){
			ans=min(ans,arr[i]);
			i=mid+1;
		}
		else{
			ans=min(ans,arr[mid]);
            j=mid-1;
		}
	}
	return ans;
}