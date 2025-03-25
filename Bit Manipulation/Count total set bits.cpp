// int countSetBits(int n)
// {
//     n++;  // to count the zero 
    
//     int i = 0;
//     int cnt = 0;
//     while(n >= (1<<i)){
//         i++;
//         int temp = (1<<i);
//         cnt += (n/temp)*(temp>>1);
//         int mod = n%(temp);
//         if(mod > (temp>>1)) cnt += mod-(temp>>1);
//     }
    
//     return cnt;
// }