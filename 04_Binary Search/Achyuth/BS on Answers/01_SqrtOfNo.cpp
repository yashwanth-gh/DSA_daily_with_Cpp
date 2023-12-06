#include <algorithm>
int floorSqrt(int n)
{
    int i=1;
    int j=n;
    int x=0;
    while(i<=j){
        long long mid=(i+j)/2;//this is imp
        if(mid*mid<=n){
            x=mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return x;
}
