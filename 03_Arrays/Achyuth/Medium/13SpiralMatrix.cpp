//Optimal Solution
vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    vector<int> v1;
    int n=MATRIX.size();
    int m=MATRIX[0].size();
   int top=0;
   int left=0; 
   int bottom=n-1;
   int right=m-1;
   while(top<=bottom && left<=right){
       for(int i=left;i<=right;i++){
           v1.push_back(MATRIX[top][i]);
       }
       top++;
       for(int i=top;i<=bottom;i++){
           v1.push_back(MATRIX[i][right]);
       }
       right--;
       if(top<=bottom){
       for(int i=right;i>=left;i--){
           v1.push_back(MATRIX[bottom][i]);
       }
       bottom--;       
       }
      if(left<=right){
       for (int i = bottom; i >= top; i--) {
           v1.push_back(MATRIX[i][left]);
       }
       left++;
      }
   }
   return v1;
}