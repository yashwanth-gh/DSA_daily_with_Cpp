//Here the elements are not unique
//Example:- {3,1,2,3,3,3} here it is not possible
bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int n=A.size();
    int i=0;
    int j=n-1;
    while(i<=j){
      int mid=(i+j)/2;
      if (A[mid] == key) {
        return true;
      }
      if(arr[mid]==arr[i] && arr[mid]==arr[j]){
        j--;                               //this is the extra line added to avoid errors
        i++;                               //in Repeatative conditions
      }
     else if (A[i] <= A[mid]) {
        if (A[i] <= key && A[mid] >= key) {
          j = mid - 1;
        } else {
          i = mid + 1;
        }
      } else {
        if (A[j] >= key && A[mid] <= key) {
          i = mid + 1;
        } else {
          j = mid - 1;
        }
      }
    }
    return false;
}
