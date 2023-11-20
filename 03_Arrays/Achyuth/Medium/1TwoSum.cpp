string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(book[i]+book[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
//Better Solution 
string read(int n, vector<int> book, int target)
{
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int more=target-book[i];
        if(mp.find(more)!=mp.end()){
            return "YES";
        }
        mp[book[i]]=i;
    }
    return "NO";
}


//Optimal Solution
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int i=0;
    int j=n-1;
    while(i<j){
        if(book[i]+book[j]==target){
            return "YES";
        }
        else if (book[i]+book[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return "NO";
}


