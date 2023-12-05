int findPeakElement(vector<int> &arr){
    int n = arr.size();
    if(n==0)return 0;
    if(arr[0]>arr[1])return 0;
    if(arr[n-1]>arr[n-2])return n-1;
    int i=1;
    int j=n-2;
    while(i<=j){
        int mid=(i+j)/2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
          return mid;
        } else if (arr[mid] > arr[mid - 1])
          i = mid + 1;
        else if (arr[mid] < arr[mid - 1])
          j = mid - 1;
        else
          j = mid - 1;  // 1 5 2 3 1 here let us take 2 which will not satisfy both 
                        //if else satement so else satement is used
    }
    return 0;
}