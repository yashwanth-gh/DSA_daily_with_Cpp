// Brute force:-
// void fact(vector<long long>&v,long long n,long long x,long long fac){
// if(x>n || fac > n)return;
// fac *=x;
// if(fac <= n)v.push_back(fac);
// fact(v, n, x+1, fac);
// }

// vector<long long> factorialNumbers(long long n) {
//     vector<long long>v;
//     long long x=1;
//     long long fac =1;
//     fact(v,n,x,fac);
//     return v;
// }


//Optimised Approch:
void fact(vector<long long>&v,long long n,long long x,long long fac){
    if(fac <= n){
        v.push_back(fac);
        fact(v, n, x+1, fac*(x+1));
    }
} 
vector<long long> factorialNumbers(long long n) {
    vector<long long>v;
    fact(v,n,1,1);
    return v;
}