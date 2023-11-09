int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	for(auto it=arr.begin();it!=arr.end();it++){
		if(*it == *(prev(it)) && it != arr.begin()){
			arr.erase(it);
			it--;
		}
	}
	return arr.size();
}