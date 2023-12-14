//Better
bool searchMatrix(vector<vector<int>>& arr, int target) {
       int n=arr.size();
       int m=arr[0].size();
        for(int i=0;i<n;i++){
          int low=0;
          int high=m-1;
          while(low<=high){
              int mid=(low+high)/2;
              if(arr[i][mid]==target)return true;
              else if(arr[i][mid]>target)high=mid-1;
              else low=mid+1;
          }
        }
        return false;
}
//Optimal
bool searchMatrix(vector<vector<int>>& arr, int target) {
       int n=arr.size();
       int m=arr[0].size();
       int i=0;
       int j=n*m-1;
       while(i<=j){
           int mid=(i+j)/2;
           int row=mid/m;
           int col=mid%m;
           if(arr[row][col]==target)return true;
           else if(arr[row][col]>target)j=mid-1;
           else i=mid+1;
       }
          
    
        return false;
}