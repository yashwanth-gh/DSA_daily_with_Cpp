
int func(int n,int mid,int m){
  long long x=1;
  for(int i=1;i<=n;i++){
    x*=mid;
    if(x>m)return 2;
  }
  if(x==m)return 1;
  return 0;;
}
int NthRoot(int n, int m) {
  // Write your code here.
  int i=1;
  int j=m;
  while(i<=j){
    int mid=(i+j)/2;
    int x=func(n,mid,m);
    if(x==1)return mid;
    else if(x==2){
      j=mid-1;
    }
    else{
      i=mid+1;
    }
  }
  return -1;
}