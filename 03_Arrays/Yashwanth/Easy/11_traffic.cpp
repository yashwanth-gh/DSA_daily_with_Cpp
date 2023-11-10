int traffic(int n, int m, vector<int> vehicle) {

    int right=0;
    int left=0;
    int temp =m;

    while(right<n){
        if(vehicle[right]==0){
            temp--;
        }
        if(temp<0){
            if(vehicle[left]==0){
                temp++;
            }  
            left++;
        }
        right++;
    }
	return right-left;
}
