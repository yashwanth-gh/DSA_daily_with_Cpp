//Brute Force Approach
double minimiseMaxDistance(vector<int> &arr, int k)
{   int n=arr.size();
    vector<int> v(n-1,0);
    for(int i=1;i<k;i++){
        int maxi=-1;long double maxx=-1;
        for(int i=0;i<n-1;i++){
            long double diff=arr[i+1]-arr[i];
            long double sect=diff/(long double)(v[i]+1);
             if(sect>maxx){
                maxx=sect;
                maxi=i;
             }
        }
        v[maxi]++;
    }
   long double maxAns=-1;
    for(int i=0;i<n-1;i++){
       long double diff=arr[i+1]-arr[i];
       long double sect=diff/(long double)(v[i]+1);
        maxAns=max(maxAns,sect);
    }
    return (double)maxAns;
}
// better Approach
#include <bits/stdc++.h>
double minimiseMaxDistance(vector<int> &arr, int k)
{   int n=arr.size();
    vector<int> v(n-1,0);
    priority_queue<pair<long double, int>> pq;
    for(int i=0;i<n-1;i++){
      pq.push({arr[i + 1] - arr[i], i});
    }
    for(int i=1;i<=k;i++){
        auto tp=pq.top();pq.pop();
        int strInd=tp.second;
        v[strInd]++;
        long double diff=arr[strInd+1]-arr[strInd];
        long double staff=diff/(long double)(v[strInd]+1);
        pq.push({staff, strInd});
    }
   
    return (double)pq.top().first;
}

//optimal solution
int func(vector<int> arr,double mid,int n){
    int cnt=0;
    for(int i=1;i<n;i++){
         int numBet=(arr[i]-arr[i-1])/mid;
         if((arr[i]-arr[i-1])/mid==numBet*mid){
             numBet--;
         }
         cnt+=numBet;
    }
    return cnt;
}
double minimiseMaxDistance(vector<int> &arr, int k)
{   int n=arr.size();
    double j=0;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>j)j=arr[i]-arr[i-1];
    }
    double i=0;
    double diff=1e-6;
    while(j-i>diff){
        double mid=(i+j)/2;
        int cnt=func(arr,mid,n);
        if(cnt>k)i=mid;
        else j=mid;
    }
    return j;
}
