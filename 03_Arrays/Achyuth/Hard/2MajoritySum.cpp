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
//Using Hashing
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	map<int,int> mp;
	vector<int> v1;
	int n=v.size();
	int x=n/3+1;
	for(int i=0;i<n;i++){
		mp[v[i]]++;
        if(mp[v[i]]==x){
             v1.push_back(v[i]);
		}
	}
	sort(v1.begin(),v1.end());
	return v1;
}
//Optimal Solution
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> v1;	
	int n=v.size();
	int x=n/3+1;
	int count1=0,count2=0;
	int ele1,ele2;
	for(int i=0;i<n;i++){
        if(count1==0 && ele2!=v[i]){
			ele1=v[i];
			count1=1;
		}
		else if(count2==0 && ele1!=v[i]){
			ele2=v[i];
			count2=1;
		}
		else if(ele1==v[i])count1++;
		else if(ele2==v[i])count2++;
		else{
			count2--;
			count1--;
		}
	}
	count1=0;
	count2=0;
	for(int i=0;i<n;i++){
		if(ele1==v[i]){
			count1++;
		}
		else if(ele2==v[i]){
			count2++;
		}
	}
	if(count1>=x)v1.push_back(ele1);
	if(count2>=x)v1.push_back(ele2);
	sort(v1.begin(),v1.end());
	return v1;
	
}