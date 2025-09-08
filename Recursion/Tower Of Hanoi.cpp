class Solution {
    public:
  
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        
        return pow(2, n) - 1;  // this is the answer because it follow the pattern in each step
                               // n = 0       0
                               // n = 1       2^1 - 1
                               // n = 2       2^2 - 1
                               // so, for n ans = 2^n - 1;
    }
};



class Solution {
    public:
    
    int cnt = 0;
  
    int towerOfHanoi(int n, int from, int to, int aux) {
        
        if(n == 0) return 0;
        
        towerOfHanoi(n-1, from, aux, to);
        
        cnt++;
        
        towerOfHanoi(n-1, aux, from, to);
        
        
        return cnt;
    
    }
};