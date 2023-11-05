vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int> mp;
    int max=INT_MIN;
    int max1=INT_MIN;
    int min=INT_MAX;
    int min1=INT_MAX;
    int curr=1;
    for(int i=0;i<v.size();i++){
           mp[v[i]]++;
    }
    for(auto it:mp){
        if(max<it.second){
               max=it.second;
               max1=it.first;
           }
        if(min>it.second){
               min=it.second;
               min1=it.first;
           }
        
    }
   vector<int> v1;
   v1.push_back(max1);
   v1.push_back(min1);
   return v1;
}