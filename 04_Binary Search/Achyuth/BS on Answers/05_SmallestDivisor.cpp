int Possible(vector<int> arr,int m,int num){
    int count=0;
	for(int i=0;i<arr.size();i++){
		count+=arr[i]/num;
		if(arr[i]%num!=0)count++;
	}
    return count;
}
int findMax(vector<int> &v) {
    int maxi = v[0];
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}
int smallestDivisor(vector<int>& arr, int limit)
{
  int i=1;
  int j=findMax(arr);
  while(i<=j){
      int mid=(i+j)/2;
      int x=Possible(arr, limit, mid);
      if(x<=limit)j=mid-1;
      else i=mid+1;
  }
  return i;
    
}

