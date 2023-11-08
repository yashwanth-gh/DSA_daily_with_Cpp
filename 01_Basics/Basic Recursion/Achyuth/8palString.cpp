//code for coding ninjas
bool stringd(string &str,int st,int end){
  if(st>end){
    return true;
  }
  if(str[st]!=str[end]){
    return false;
  }
 return string(str,st+1,end-1);
}
bool isPalindrome(string& str) {
    // Write your code here.
    return string(str,0,str.size()-1);
}

//code which exclude capital, symbols like ",/!..etc"
class Solution {
public:
    bool isAlphaNumeric(char c) {
        return isalnum(c); // Check if a character is alphanumeric
    }

    bool stringd(string &str, int st, int end) {
        while (st < end && !isAlphaNumeric(str[st])) {
            st++; // Skip non-alphanumeric characters from the start
        }
        while (st < end && !isAlphaNumeric(str[end])) {
            end--; // Skip non-alphanumeric characters from the end
        }
        
        if (st >= end) {
            return true; // All alphanumeric characters checked
        }
        
        if (tolower(str[st]) != tolower(str[end])) {
            return false;
        }
        
        return stringd(str, st + 1, end - 1);
    }

    bool isPalindrome(string &str) {
        return stringd(str, 0, str.size() - 1);
    }
};
