vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int x=a[a.size()-1];
    vector<int> v1;
    map<int,int> mp;
    mp[x]++;
   for(int i=a.size()-2;i>=0;i--){
          int count=0;
       for(int j=i+1;j<a.size();j++){
           if(a[i]<a[j]){
             count=1;
               break;
           }
       }
       if(count==0){
           mp[a[i]]++;
       }

   }
    x=a[0];
   sort(a.begin(),a.end());
   if(x>a[a.size()-1]){
       mp[x]++;
   }
 for(auto it:mp){
     v1.push_back(it.first);
 }

    return v1;
}