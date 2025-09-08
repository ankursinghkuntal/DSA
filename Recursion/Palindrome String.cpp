class Solution {
  public:
  
    bool isPal(string &str, int low, int high){
        if(low > high) return true;
        return (str[low] == str[high]) && isPal(str, low+1, high-1);
    }
    
    bool isPalindrome(string& s) {
        // code here
        return isPal(s, 0, s.size()-1);
    }
};