void insertEle(vector<int>&v1,int x){
    if(x == 0)return;
    v1.push_back(x);
    insertEle(v1, x-1);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>v1;
    insertEle(v1,x);
    return v1;
}