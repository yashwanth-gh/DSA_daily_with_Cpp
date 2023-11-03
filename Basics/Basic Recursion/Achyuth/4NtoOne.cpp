void push(vector<int> &v1,int n){
  if(n==0){
    return;
  }
    v1.push_back(n);
  push(v1,n-1);

}
vector<int> printNos(int x) {
    // Write Your Code Here  
    vector<int> v1;
    push(v1,x);
    return v1;
    }
