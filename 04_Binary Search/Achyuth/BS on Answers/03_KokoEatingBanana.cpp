#include <vector>
int findMax(vector<int> &v) {
    int maxi = v[0];
    int n = v.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}
int ceil(vector<int> v,int n,int mid){
    int y=0;
    for(int i=0;i<n;i++){
       y+=(v[i]/mid);
       if(v[i]%mid !=0){
           y++;
       }
    }
    return y;
}
int minimumRateToEatBananas(std::vector<int> v, int h) {
    int n = v.size();
    int maxx = findMax(v);
    int x=1;
    while (x <= maxx) {

      int mid = (x + maxx) / 2;
      int y=ceil(v, n, mid);
       if (y == h) {
            return mid;  // Return mid when y equals h
        } else if (y < h) {
            maxx = mid - 1;
        } else {
            x = mid + 1;
        }
    }

    return x;
}
