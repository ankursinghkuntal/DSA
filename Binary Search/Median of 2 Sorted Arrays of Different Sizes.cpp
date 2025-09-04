class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        
        // Important condition  n1 <= n2
        
        if(n1 > n2){
            vector<int>temp = a;
            a = b;
            b = temp;
            
            swap(n1, n2);
        }
        
        
        int st1 = 0, end1 = n1;
        
        while(st1 <= end1){
            
            int i1 = (st1+end1)/2;
            int i2 = (n1 + n2 + 1)/2 - i1;
            
            int min1 = (i1 == n1) ? INT_MAX : a[i1];
            int max1 = (i1 == 0) ? INT_MIN : a[i1-1];
            
            int min2 = (i2 == n2) ? INT_MAX : b[i2];
            int max2 = (i2 == 0) ? INT_MIN : b[i2-1];
            
            if(min1 >= max2  && min2 >= max1){
                if((n1+n2)%2 == 0){
                    return (min(min1,min2) + max(max1,max2)) / 2.0;
                }else{
                    return (double)max(max1, max2);
                }
            }
            
            else if(max1 > min2) end1 = i1 - 1;
            
            else st1 = i1 + 1;
            
        }
        
        return -1;
    }
};