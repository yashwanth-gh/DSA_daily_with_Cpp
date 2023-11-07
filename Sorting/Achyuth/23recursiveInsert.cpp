void insertionSort(int arr[], int n)
{
    //write your code here
    if (n <= 1) {
        return;
    }

    // Sort the first n-1 elements
    insertionSort(arr, n - 1);

    // Insert the nth element into the sorted part
    int lastElement = arr[n - 1];
    int j = n - 2;

    // Move elements of the sorted part that are greater than the last element to the right
    while (j >= 0 && arr[j] > lastElement) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = lastElement;
}