void fact(vector<long long> &v1,int x,int n,int y){
  if(x*y>n || x==0){
    return;
  }
  v1.push_back(x*y);
  y++;
  fact(v1,x,n,y);
}
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> v1;
    fact(v1,n);
}