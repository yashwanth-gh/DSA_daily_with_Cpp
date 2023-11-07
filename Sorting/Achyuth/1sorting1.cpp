#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
  for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(a[min]>a[j]){
        min=j;
      }
    }
    int temp=a[min];
    a[min]=a[i];
    a[i]=temp;
  }
}
void bubble_sort(int a[],int n){
  for(int i=0;i<n;i++){ 

    //if it is already sorted then we use didswap
    int didswap=0;
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            didswap++;
        }
    }
    if(didswap==0){
          break;
        }
  }
}
void insertion_sort(int a[],int n){//3 2 1 
  for(int i=1;i<n;i++){
    int j=i-1;
    int temp=a[i];
    while(j>=0 && a[j]>temp){
      a[j+1]=a[j];
      j--; 
    }
     a[j+1]=temp;
  }
}
int main() {
	// Write your code here
	int n;
	cin>>n;
	int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  // selection_sort(a,n);
  bubble_sort(a,n);  //bubble sort didn't acceprted by the compiler 
                     //it showed(COMPILER ERROR)
  // insertion_sort(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

}
