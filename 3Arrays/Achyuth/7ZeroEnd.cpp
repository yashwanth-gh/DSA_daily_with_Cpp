vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a.erase(a.begin()+i);
            a.push_back(0);
            n--;
            i--;
        }
   }
    return a;
}
