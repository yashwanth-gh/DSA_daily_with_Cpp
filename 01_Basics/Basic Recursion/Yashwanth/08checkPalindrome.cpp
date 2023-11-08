void check(string& str,int l,int r,bool& sol){
if(l>=r)return;
check(str, l+1, r-1, sol);
if(str[l] != str[r])sol= false;
}
bool isPalindrome(string& str) {
    // Write your code here.
    bool sol=true;
  check(str,0,str.length()-1,sol);
  return sol;
}
