vector<int> majorityElement(vector<int> v) {
	// Write your code here
	sort(v.begin(),v.end());
	int count=1;
	float x=v.size()/3;
	// cout<<x<<endl;
	vector<int> v1;
	for(int i=0;i<v.size();i++){
		if(v[i]==v[i+1]){
             count++;
		}else{
               if(count>x){
				   v1.push_back(v[i]);
			   } 
			   count=1;
		}
	}
	return v1;
}