void add_cn(vector<string>&v1,int n){
	if(n==0)return;
	v1.push_back("Coding Ninjas");
	add_cn(v1,n-1);
}
vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string>v1;
	add_cn(v1,n);
	return v1;
}