
int partitionArray(int input[], int start, int end) {
	// Write your code here
	int p=input[start];
	int i=start;
	int j=end;
	while(i<j){
		while(i<end && input[i]<=p){
			i++;
		}
		while(j>start && input[j]>=p){
			j--;
		}
		if(i<j){
			swap(input[i],input[j]);
		}
	}
	 swap(input[start], input[j]);
    return j;


}

void quickSort(int input[], int start, int end) {
	if(start<end){
		int piv=partitionArray(input, start, end);
		quickSort(input, start, piv-1);
		quickSort(input, piv+1, end);
	}
}