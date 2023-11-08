vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> v1;
    int i=0,j=0;
    for(int i=0;i<a.size()-1;i++){
          while(a[i]==a[i+1]){
              a.erase(a.begin()+i+1);
              i--;
          }
    }
     for(int i=0;i<b.size()-1;i++){
          while(b[i]==b[i+1]){
              b.erase(b.begin()+i+1);
              i--;
          }
    }

    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            v1.push_back(a[i]);
            i++;
        }
        else if (a[i]>b[j]){
            v1.push_back(b[j]);
            j++;
        }else{
            v1.push_back(a[i]);
            j++;
            i++;
        }
    }
    while(i<a.size()){
         v1.push_back(a[i]);
            i++;
    }
     while(j<b.size()){
         v1.push_back(b[j]);
            j++;
    }
    return v1;
    
}