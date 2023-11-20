void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
