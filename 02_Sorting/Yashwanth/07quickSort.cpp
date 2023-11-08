/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot = input[start];
	int left=start;
	int right=end;
	while(left<right){
		while(input[left]<=pivot && left<=end-1){
			left++;
		}	
		while(input[right]>pivot && right>=start+1){
			right--;
		}	
		if(left<right)swap(input[left],input[right]);
	}
	swap(input[start],input[right]);
	return right;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end){
		int j=partitionArray(input, start, end);
		quickSort(input, start, j-1);
		quickSort(input, j+1, end);
	}
}