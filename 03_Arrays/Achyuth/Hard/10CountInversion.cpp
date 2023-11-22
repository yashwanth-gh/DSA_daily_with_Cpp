//Brute Force Method
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(a[i]>a[j] ){
                 count++;
             }
        }
    }
    return count;
}
//Merge Sort Method
