vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int x=a[0];
    int y=INT_MIN;
    int p=a[0];
    int q=INT_MAX;;
    for(int i=1;i<n;i++){
        if(x<a[i]){
            y=x;
            x=a[i];
        }
        else if (y<a[i]){
            y=a[i];
        }
        if(p>a[i]){
            q=p;
            p=a[i];
        }
        else if(q>a[i]){
            q=a[i];
        }
    }
    vector<int> v1;
    v1.push_back(y);
     v1.push_back(q);
    return v1;
}
