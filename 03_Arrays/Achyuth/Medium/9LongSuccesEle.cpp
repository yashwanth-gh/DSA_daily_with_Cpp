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
//OPTIMAL SOLUTION
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int longest=1;
   unordered_set<int> st;
   int n=a.size();
   for(int i=0;i<n;i++){
       st.insert(a[i]);
   }
   for(auto it:st){
       if(st.find(it-1)==st.end()){
           int count=1;
           int x=it;
           while(st.find(x+1)!=st.end()){
               x+=1;
               count++;
           }
           longest=max(longest,count);
       }
   }
   return longest;
}