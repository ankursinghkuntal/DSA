// int maxAND (int arr[], int N)
// {
//     int mx = 0;
//     for(int i = 0; i < N; i++){
//         mx = max(mx,arr[i]);
//     }
    
//     int leftMost = 0;
//     while(mx >= (1<<leftMost)){
//         leftMost++;
//     }
    
//     int ans = 0;
//     int i = leftMost-1;
//     while(i != -1){
//         ans = (ans^(1<<i));
//         int cnt = 0;
//         for(int j = 0; j < N; j++){
//             if((ans&arr[j]) == ans) cnt++;
//         }
//         if(cnt < 2){
//             ans ^= (1<<i);
//         }
//         i--;
//     }
//     return ans;
// }