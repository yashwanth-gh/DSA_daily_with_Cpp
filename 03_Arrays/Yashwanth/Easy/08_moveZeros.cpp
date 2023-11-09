vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int left=0;
    while(a[left] != 0 && left<n){
        left++;
    }
    int right=left+1;
 while (left < n - 1) {
        if (right < n) {
            if (a[right] != 0) {
                swap(a[left], a[right]);
                left++;
            }
            right++;
        } else {
            break; // Break the loop if 'right' exceeds the vector size
        }
    }
     return a; 
    
}
