vector<int> countFrequency(int n, int x, vector<int> &nums) {
    vector<int> v1(n, 0);

    for(int i=0;i<n;i++){
            v1[nums[i]-1]++;
        
    }
    
    return v1;
}
