int findKRotation(vector<int> &arr){
    // Write your code here.   
    int n=arr.size();
	int i=0;
	int j=n-1;
	int ans=arr[0];
    int x=0;
	while(i<=j){
        int mid=(i+j)/2;
		if(arr[mid]>=arr[i] && arr[mid]<=arr[j]){
			if(ans>arr[i]){
                ans=arr[i];
                x=i;
            }
            return x;
		}
		if(arr[mid]>=arr[i]){
            if(ans>arr[i]){
                ans=arr[i];
                x=i;
            }
            i=mid+1;
		}
		else{
			 if(ans>arr[mid]){
                ans=arr[mid];
                x=mid;
            }
            j=mid-1;
		}
	}
	return x;
}