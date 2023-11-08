//^ --This is just the function copied from Coding Ninjas that i solved

void insertEle(vector<int>&v1,int x){
    if(x == 0)return;
    insertEle(v1, x-1);
    v1.push_back(x);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>v1;
    insertEle(v1,x);
    return v1;
}