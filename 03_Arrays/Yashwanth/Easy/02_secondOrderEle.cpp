// -----------------------BRUTE FORCE ------------------
// all element sin the array is unique
// eg. [1,7,6,4,8]
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(),a.end());
    return {a[n-2],a[1]};
}

// ----------------------- OPTIMAL ------------------

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int max =a[0] ;
    int secondMax=-1;
    int min = a[0];
    int secondMin=INT_MAX;

    for(auto ele:a){
        if(ele>max){
            secondMax=max;
            max=ele;
        }
        if(ele<max && ele>secondMax){
            secondMax=ele;
        }
        if(ele<min){
            secondMin=min;
            min=ele;
        }
        if(ele>min && ele<secondMin){
            secondMin=ele;
        }
    }
    return {secondMax,secondMin};

}
