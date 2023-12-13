// Brute force only upto N=22-----------
// then it furtur causes overflow

long long fac(int num){
    if(num <= 1)return 1;
    return num*fac(num-1);
}

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.

	vector<vector<int>>sol(N);
    int formula = 0;

    for (int i = 0; i < N; i++) {
        int j = 0;
        long long n = fac(i);

        while (j <= i) {
            if (i == 0) {
                sol[i].push_back(1);
                break;
            }

            long long r = fac(j);
            long long sub = i - j;
            long long q = fac(sub);

            formula = static_cast<int>(n / (r * q)); // Ensure the result fits into an int
            sol[i].push_back(formula);
            j++;
        }
    }
    return sol;
}

// optimed-------------------O(N^2)

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>>sol(N);
    for(int i=1;i<=N;i++){
        int ans=1;
        for(int j=0;j<i;j++){
            if(i==1){
            sol[0].push_back(1);
            break;
            }
            if(j==0){
            sol[i-1].push_back(1);
            continue;
            }
            ans*=(i-j);
            ans/=j;
            sol[i-1].push_back(ans);
        }
    }
    return sol;
}