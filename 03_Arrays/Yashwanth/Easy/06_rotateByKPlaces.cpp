//-------------------------BRUTE FORCE --------------------------

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    while(k--){
        int temp = arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    return arr;
}

