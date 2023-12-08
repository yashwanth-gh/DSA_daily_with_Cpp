vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    int max=a[n-1];
    vector<int>v;
    v.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            v.push_back(a[i]);
            max=a[i];
        }
    }
    return v;
}