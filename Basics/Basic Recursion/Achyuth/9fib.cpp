vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> v1;
for(int i=0;i<n;i++){
  v1.push_back(fib(i));
}
return v1;
}
int fib(int n){
      if(n<=1){
      return n;
    }else
      return fib(n-2)+fib(n-1);
}