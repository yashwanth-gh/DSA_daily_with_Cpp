//brute
/*
    Time Complexity: O('n' + 'm')
    Space Complexity: O(1)

    Where 'n' & 'm' are the sizes of the arrays.
*/

double median(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    int i = 0, j = 0, m1 = 0, m2 = 0;

    // Find median.
    for (int count = 0; count <= (n + m) / 2; count++)
    {
        m2 = m1;
        if (i != n && j != m)
        {
            if (a[i] > b[j])
            {
                m1 = b[j++];
            }
            else
            {
                m1 = a[i++];
            }
        }

        // If i is less than n
        else if (i < n)
        {
            m1 = a[i++];
        }
        else
        {
            m1 = b[j++];
        }
    }

    // Check if sum of n and m is even
    if ((n + m) % 2 == 1)
    {
        return m1;
    }
    else
    {
        double ans = m1 + m2;
        return ans / 2;
    }
}
//brute without extra space
#include <vector>

using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int temp[r - l + 1]; // Change vector<int> to int[]
    int low = l;
    int k = 0; // Change k = l to k = 0
    int high = mid + 1;

    while (low <= mid && high <= r) {
        if (arr[low] <= arr[high]) {
            temp[k] = arr[low];
            low++;
        } else {
            temp[k] = arr[high];
            high++;
        }
        k++;
    }

    while (low <= mid) {
        temp[k] = arr[low];
        low++;
        k++;
    }

    while (high <= r) {
        temp[k] = arr[high];
        high++;
        k++;
    }

    for (int i = 0; i <= r - l; i++) { // Update the loop bounds
        arr[l + i] = temp[i];
    }
}

double median(vector<int>& a, vector<int>& b) {
    int n = a.size();
    for (int i = 0; i < b.size(); i++) {
        a.push_back(b[i]);
    }

    int m = a.size();
    merge(&a[0], 0, n - 1, m - 1); // Pass the array as a pointer

    if (m % 2 == 0) {
        return (double)(a[m / 2 - 1] + a[m / 2]) / 2.0;
    } else {
        return (double)a[m / 2];
    }
}
// Optimal
double median(vector<int>& a, vector<int>& b) {
   int n1=a.size();
   int n2=b.size();
   if(n1>n2)return median(b,a);
   int low=0;
   int high=n1;
   int left=(n1+n2+1)/2;
   int n=n1+n2;
   while(low<=high){
       int mid1=(low+high)/2;
       int mid2=left-mid1;
       int l1=INT_MIN; int l2=INT_MIN;
       int r1=INT_MAX; int r2=INT_MAX;
       if(mid1<n1)r1=a[mid1];
       if(mid2<n2)r2=b[mid2];
       if(mid1-1>=0)l1=a[mid1-1];
       if(mid2-1>=0)l2=b[mid2-1];
       if(l1<=r2 && l2<=r1){
           if(n%2==1)return max(l1,l2);
           return ((double)(max(l1,l2)+min(r1,r2)))/2.0;
       }
       else if(l1>r2)high=mid1-1;
       else low=mid1+1;
   }
   return 0;
}

