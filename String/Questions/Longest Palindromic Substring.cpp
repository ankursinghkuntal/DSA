class Solution {
  public:
  
  int n;
  
    bool isPalindrome(string &str, int &low, int &high){
        
        while(low >= 0  &&  high <= n-1){
            if(str[low] != str[high]) return false;
            low--;
            high++;
        }
        return true;
    }
  
    string getLongestPal(string &s) {
        
        int mxLenPalindrome = INT_MIN;
        
        string ans = "";
        
        n = s.size();
        
        if(n == 1) return s;
        
        for(int i = 0; i < n-1; i++){
            
            int right = i+1, left = i;
            
            isPalindrome(s, left, right);
            if(mxLenPalindrome < (right - left-1)){
                mxLenPalindrome = (right-left-1);
                
                ans = s.substr(left+1, right-left-1);
            }
            
            
            right = i, left = i;
            
            isPalindrome(s, left, right);
            if(mxLenPalindrome < (right - left-1)){
                mxLenPalindrome = (right-left-1);
                
                ans = s.substr(left+1, right-left-1);
            }
            
        }
        
        
        return ans;
    }
};