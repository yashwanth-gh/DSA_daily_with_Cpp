int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	 int i=0;
    int j=n-1;
	int count=n;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]>=x){
			count=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
	return count;
}
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	 int i=0;
    int j=n-1;
	int count=n;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]>x){
			count=mid;
            j=mid-1;
        }
        else{

            i=mid+1;
        }
    }
	return count;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
   int x= lowerBound(arr, n, k);
   if(arr[x]!=k || x==n)return{-1,-1};
   int y=upperBound(arr, k, n)-1;
       return {x,y};
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	pair<int,int> p=firstAndLastPosition(arr, n, x);
    if(p.first==-1)return 0;
    return p.second-p.first+1;
}
