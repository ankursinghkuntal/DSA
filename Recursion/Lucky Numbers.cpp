class Solution {
  public:
    bool isLucky(int n) {
        // code here
        
        if(n%2 == 0) return 0;
        
        int m = 2;
        
        while(n%m > 0 && n > m){
            
            n = n-(n/m);
            m++;
            
        }
        
        if(n%m != 0) return 1;
        
        return 0;
        
    }
};