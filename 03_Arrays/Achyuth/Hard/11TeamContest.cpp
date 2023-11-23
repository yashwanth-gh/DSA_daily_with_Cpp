int team(vector <int> & skill, int n)
{
    // Write your code here.
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(skill[i]>2*skill[j]){
                count++;
            }
        }
    }
    return count;
}

//Optimal Merge Sort Technique
int merge(vector<int>& arr, int l, int mid, int r) {
    int count = 0;
    int temp[r];
    int low = l;
    int k = l;
    int high = mid + 1;

    while (low <= mid && high <= r) {
        if (arr[low] <= arr[high]) {
            temp[k] = arr[low];
            low++;
            k++;
        } else {
            temp[k] = arr[high];
            if (arr[low] > 2 * arr[high]) {
                count += (mid - low + 1);
            }
            high++;
            k++;
        }
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

    for (int i = l; i <= r; i++) {
        arr[i] = temp[i];
    }

    return count;
}

int countpairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;

    for (int i = low; i <= mid; i++) {
        while (right <= high && arr[i] > 2 * arr[right]) {
            right++;
        }
        cnt += (right - mid - 1);
    }

    return cnt;
}

int mergeSort(vector<int>& arr, int l, int r) {
    int cnt = 0;
    if (l < r) {
        int mid = l + (r - l) / 2;
        cnt += mergeSort(arr, l, mid);
        cnt += mergeSort(arr, mid + 1, r);
        cnt += countpairs(arr, l, mid, r);
        merge(arr, l, mid, r);
    }
    return cnt;
}

int team(vector <int> & skill, int n) {
    return mergeSort(skill, 0, n-1);
}
