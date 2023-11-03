//for this code time exeeded during execution
//which is to be recursive not iterative
void add(long long sum,long long n){
  if(n==0){
    return;
  }
  sum+=n;
  add(sum,n-1);  
}
long long sumFirstN(long long n) {
    // Write your code here.
    long long sum=0;
    add(sum,n);
    return sum;
}


//I've seen solution from yashwanth which is simple to understand
//the below one is from others  
long long sumFirstN(long long n) {
    // Write your code here.
    if(n==1)return 1;
    return n+sumFirstN(n-1);
}