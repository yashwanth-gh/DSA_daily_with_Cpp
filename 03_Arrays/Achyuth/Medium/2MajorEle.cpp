int majorityElement(vector<int> v) {
	// Write your code here
	sort(v.begin(), v.end());
	int max=1;
	int x=v[0];
	for(int i=0;i<v.size();i++){
		int count=1;
		while(v[i]==v[i+1]){
			count++;
			i++;
		}
		if(count>max){
			max=count;
			x=v[i-1];
		}
	}
	return x;
}