//Find the value of ith row and jth column
//Formula is nCr n=row,r=column  
int factorial(int n,int m){
  int res=1;
  for(int i=0;i<m;i++){
     res*=(n-i);
     res/=(i+1);
  }
  return res;
}
//Print Entire row
void row(vector<int> &v,int n){
  v[n][0]=1;
  int x=factorial(n,1);
  for(int i=1;i<n;i++){
       x*=(x-i+1)/i;
       v[n][i]=x;
  }
}
//Pascal's Triangle
void PascalTriangle(vector<vector<int>> v,int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      v[i][j]=factorial(i,j);
    }
  }
}
