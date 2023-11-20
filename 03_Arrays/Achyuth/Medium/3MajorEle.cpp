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
//Another Better Solution by two pointer method
int majorityElement(vector<int> v) {
	// Write your code here
	int count=0;
	int max;
	while(i<n && j<n){
          if(v[i]==v[j]){
			  count++;
			  i=j;
			  j++;
			if(count>=n/2){
				 return v[i];
			 }
		  }
            else{
				 count=0;
				 i=j;
			 }
}
}
//By Using HASHING
int majorityElement(vector<int> v) {
	// Write your code here
	unordered_map<int,int> mp;
	for(int i=0;i<v.size();i++){
		mp[v[i]]++;
	}
	for(auto it:mp){
		if(it.second>n/2){
			return it.first;
		}
	}
	return -1;
}
//OPTIMAL SOLUTION (MOUSE VOTING ALGO)
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