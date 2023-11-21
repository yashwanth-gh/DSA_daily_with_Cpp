vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> v1;
     vector<int> v2;
     for(int i=0;i<a.size();i++){
           if(a[i]>=0){
               v1.push_back(a[i]);
           }
           else{
               v2.push_back(a[i]);
           }
     }
     int i=0,j=0,k=0;
     while(i<a.size() && j<v1.size() && k<v2.size()){
            a[i]=v1[j];
            i++;
            j++;
            a[i]=v2[k];
            i++;
            k++;
     }
    return a;
}
//Better Solution
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> v1;
     vector<int> v2;
     for(int i=0;i<a.size();i++){
           if(a[i]>=0){
               v1.push_back(a[i]);
           }
           else{
               v2.push_back(a[i]);
           }
     }
    for(int i=0;i<a.size()/2;i++){
         a[i*2]=v1[i];
         a[i*2+1]=v2[i];
    }
    return a;
}
//Optimal Solution
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> v1(a.size());
    int k=0,j=1;
     for(int i=0;i<a.size();i++){
           if(a[i]>=0){
               v1[k]=a[i];
               k+=2;
           }
           else{
               v1[j]=a[i];
               j+=2;
           }
     }
    
    return v1;
}