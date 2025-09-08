// User function Template for C++
class Solution {
  public:
    // 1.

    // void reverse(string &str, int low, int high){
    //     if(low > high) return;
    //     swap(str[low], str[high]);
    //     reverse(str, low+1, high-1);
    // }



    
    // 2.

    string reverse(string &str, int n){
        if(n < 0) return "";
        return str[n]+reverse(str, n-1);
    }
  
    string reverseString(string& s) {
        // code here

        // 1

        // reverse(s, 0, s.size()-1);

        
        
        // 2.

        s = reverse(s, s.size()-1);
        
        return s;
    }
};
