//Optimal Solution
vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int n=A.size();
    int count=-1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            count=i;
            break;
        }
    }
    if(count==-1){
        reverse(A.begin(), A.end());
        return A;
    }
    for(int j=n-1;j>count;j--){
        if(A[j]>A[count]){
            swap(A[j],A[count]);
            break;
        }
    }
    reverse(A.begin()+count+1,A.end());
    return A;
} 

//Using STL in CPP
vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    next_permutation(A.begin(),A.end());
    return A;
}