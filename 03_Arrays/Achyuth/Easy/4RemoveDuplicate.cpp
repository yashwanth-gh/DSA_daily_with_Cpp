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
//optimal solution
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int j=0
	for(int i=1;i<n;i++){
		if(a[i]!=a[j]){
			a[j+1]=a[i];
			j++;
		}
	}
	return j+1;
}
