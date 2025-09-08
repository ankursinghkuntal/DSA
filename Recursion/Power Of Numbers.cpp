class Solution {
  public:
    
    void reverseTheNum(int n, int &num, int cnt){
        if(n == 0) 
            return;
            
        num = num*(calPow(10, cnt)) + n%10;
        return reverseTheNum(n/10, num, cnt+1);
    }
    
    int calPow(int num, int val){
        if(val == 0) return 1;
        return num * calPow(num, val-1);
    }
  
    int reverseExponentiation(int n) {
        // code here
        int rev = 0;
        
        reverseTheNum(n, rev, 0);
        
        return calPow(n, rev);
        
    }
};