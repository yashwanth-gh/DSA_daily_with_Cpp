int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    sort(a.begin(),a.end());
    int maxx=0;
    int count=1;
    for(int i=0;i<a.size();i++){
    if(a[i]!=a[i+1]){
      if (a[i] == a[i + 1] - 1) {
         count++;
      }
      else{
          maxx=max(count,maxx);
          count=1;
      }
        }
     
    }
    return maxx;
}