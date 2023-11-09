#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int x;
	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]==arr[i+1]){
			while(arr[i]==arr[i+1]){
				i++;
			}
		}else{
			return arr[i];
		}
	}	
	return arr[arr.size()-1];
}