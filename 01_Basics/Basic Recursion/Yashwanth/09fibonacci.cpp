// TIme limit exeeded :

// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// vector<int> generateFibonacciNumbers(int n)
// {
//     // Write your code here.
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         v.push_back(fib(i));
//     }
//     return v;
// }

void fib(vector<int> &v,int n){
    if(n==1){
        v.push_back(0);
        v.push_back(1);
        return;
    }
    fib(v,n-1);
    v.push_back(v[n-2]+v[n-1]);

}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>v;
    fib(v,n-1);
    return v;
}