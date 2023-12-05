pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	 int i=0;
    int j=n-1;
	int floor=-1;
	int ceil=-1;
    while(i<=j){
        int mid=(i+j)/2;
		if(a[mid]==x){
			floor=a[mid];
			ceil=a[mid];
			break;
		}
        if(a[mid]>x){
			ceil=a[mid];
            j=mid-1;
        }
        else{
			floor=a[mid];
            i=mid+1;
        }
    }
	pair<int,int> p={floor,ceil};
	return p;
}