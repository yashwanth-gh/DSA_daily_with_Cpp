void merge(int arr[], int l, int r, int mid) {
    int temp[r - l + 1]; // Declare 'temp' with the appropriate size
    int k = 0;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right <= r) {
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
        }
    }
    while (left <= mid) {
        temp[k++] = arr[left++];
    }
    while (right <= r) {
        temp[k++] = arr[right++];
    }

    // Copy the merged values back to the original array 'arr'
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, r, mid); // Call 'merge' to merge the sorted subarrays
}
