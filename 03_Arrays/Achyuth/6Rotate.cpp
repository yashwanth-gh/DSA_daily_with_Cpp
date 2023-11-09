vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
        vector<int> v1(n);
    int j=0;
    for(int i=k;i<n;i++){
        v1[j]=arr[i];
        j++;
    }
    for(int i=0;i<k;i++){
        v1[j]=arr[i];
        j++;
    }
    return v1;
}
