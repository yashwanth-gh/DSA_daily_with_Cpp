//Without Extra Space
#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
    int n=a.size();
    int m=b.size();
	int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(a[left]>b[right]){
            swap(a[left],b[right]);
            left--;
            right++;
        }
        else{
           break;
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());   
}
//Another one
#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
    #include<vector>
void swapp(vector<long long> &a,vector<long long> &b,int i,int j){
    if(a[i]>b[j]){
        swap(a[i],b[j]);
    }
}
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
    int n=a.size();
    int m=b.size();
    int len=n+m;
	int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            if(left<n && right>=n){
                swapp(a,b,left,right-n);
            }
            else if(left>=n){
                 swapp(a, b, left-n, right-n);
            } else {
                 swapp(a, b, left, right);
            }
            left++;
            right++;
        }
        if (gap == 1)
            break;
        else
            gap = (gap / 2) + (gap % 2);
    }
}  
}
//With Extra space
#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	 long long n = a.size();
    long long m = b.size();
    
    for (int i = 0; i < m; i++) {
        a.push_back(b[i]);
    }
    
    b.clear();
    
    int i = 0, j = n;
    
    while (i < n && j < n + m) {
        if (a[i] < a[j]) {
            b.push_back(a[i]);
            i++;
        } else {
            b.push_back(a[j]);
            j++;
        }
    } 
    while (i < n) {
        b.push_back(a[i]);
        i++;
    }
    while (j < n + m) {
        b.push_back(a[j]);
        j++;
    }
   a.clear();
}