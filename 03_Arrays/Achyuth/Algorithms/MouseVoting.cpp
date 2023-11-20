int majorityElement(vector<int> v) {
	// Write your code here
	int count=0;
	int maj;
	for(int i=0;i<n;i++){
		if(count==0){
			count++;
			maj=v[i];
		}
		else if(maj==v[i]){
			count++;
		}else{
			count--;
		}
	}
	count=0;
	for(int i=0;i<n;i++){
		if(maj==v[i]){
			count++;
		}
	}
	if(count>n/2)return maj;
	return -1;
}