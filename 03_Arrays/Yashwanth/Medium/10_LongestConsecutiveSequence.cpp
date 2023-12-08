int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    sort(a.begin(),a.end());
    int n = a.size();
    int longSeq = 0;
    int maxi=0;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1] == 1){
            longSeq++;
            maxi = max(maxi,longSeq);
            
        }
        if(a[i]-a[i-1]>1){
            longSeq = 0;
        }
    }
        maxi = max(maxi,longSeq);
    return  maxi+1;

}