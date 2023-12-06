int findMax(vector<int> &v) {
    int maxi = v[0];
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}
int findMin(vector<int> &v) {
    int minn = v[0];
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        minn = min(minn, v[i]);
    }
    return minn;
}
bool Possible(vector<int> arr,int k,int m,int day){
	int count=0;
	int no=0;
	for(int i=0;i<arr.size();i++){
		if(day>=arr[i]){
			count++;
		}
		else{
			no+=count/k;
			count=0;
		}
	}
	no+=count/k;
	if(no>=m)return true;
	return false;
}
int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	int n=arr.size();
	int x=findMin(arr);
	int j=findMax(arr);
	int y=-1;
	while(x<=j){
		int mid=(x+j)/2;
		if(Possible(arr, k, m, mid)){
			y=mid;
			j=mid-1;
		}else{
			x=mid+1;
		}
	}
		
	
	return y;
	
}