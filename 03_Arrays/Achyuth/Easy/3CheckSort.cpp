int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return 0;
        }
    }
    return 1;
}
//this is the optimal soluition
int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0;i<n/2;i++){//loop will be till n/2 
        if(a[i]>a[i+1]){  //from front it will check
            return 0;
        }
        if(a[n-i-1]<a[n-i-2]){  //from back it will check
            return 0;
        }
    }
    return 1;
}
