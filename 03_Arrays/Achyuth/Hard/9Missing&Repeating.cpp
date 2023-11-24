#include <map>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    vector<int> v;
    int x;
    int y;
    sort(a.begin(),a.end());
    int count=0;
    for (int i = 0; i < a.size(); i++) {
            if(i>0 && a[i]==a[i-1]){
                x=a[i];
            } 
            else{
           count+=a[i];
            }
       
    }

    count=(a.size()*(a.size()+1))/2-count;
 v.push_back(x);
 v.push_back(count);
    return v;
}

//Hashing
#include <map>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here 
    int n=a.size();
    vector<int> v(n+1,0);
    int x=-1,y=-1;
    for (int i = 0; i < a.size(); i++) {   
        v[a[i]]++; 
    }
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            y=i;
        }
        else if(v[i]==2){
            x=i;
        }
        if(x!=-1 && y!=-1){
            break;
        }
    }
    vector<int> v1(2,0);
   v1[0]=x;
   v1[1]=y;
    return v1;
}
//Optimal Solution
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here 
    long long n=a.size();
    long long s=0;
    long long s2=0;
    long long sn=(n*(n+1))/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;
    for(int i=0;i<n;i++){
       s+=a[i];
       s2+=(long long)a[i]*(long long)a[i];
    }
    int val1=s-sn;
    int val2=s2-s2n;
    val2=val2/val1;
    int x=(val2+val1)/2;
    int y=x-val1;
    return {(int)x,(int)y};
}   



