void bubbleSort(int arr[], int n) 
{
    //write your code here
    if(n==1)return;
    for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    bubbleSort(arr, n-1);
}