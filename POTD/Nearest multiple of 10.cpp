    // string roundToNearest(string str) {
    //     int n = str.size();
    //     int num = int(str[n-1] - '0');
        
    //     if(num <= 5) {
    //         str[n-1] = '0';
    //         return str;
    //     } else {
    //         str[n-1] = '0';
            
    //         for(int i = n-2; i >= 0; i--) {
    //             if(str[i] == '9') {
    //                 str[i] = '0';
    //             } else {
    //                 str[i] = char(str[i] + 1);
    //                 return str;
    //             }
    //         }
            
    //         return "1" + str;
    //     }
    // }