vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int>v(n,0);
    for(auto ele:nums){
        v[ele-1]+=1;
    }
    return v;
}