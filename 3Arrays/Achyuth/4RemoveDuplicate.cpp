int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int count=n;
	for(int i=0;i<n;i++){
		while(arr[i]==arr[i+1]){
			count--;
			i++;
		}
	}
	return count;
}
