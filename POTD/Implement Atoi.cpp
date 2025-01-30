// class Solution {
// public:
//     int myAtoi(char *s) {
//         long num = 0;
//         int sign = 1;
//         int i = 0;

//         while (s[i] == ' ') {
//             i++;
//         }

//         if (s[i] == '+' || s[i] == '-') {
//             sign = (s[i] == '-') ? -1 : 1;
//             i++;
//         }

//         while (s[i] >= '0' && s[i] <= '9') {
//             int digit = s[i] - '0';
//             if (num > (LONG_MAX - digit) / 10) {
//                 return (sign == 1) ? INT_MAX : INT_MIN;
//             }
//             num = num * 10 + digit;
//             i++;
//         }

//         num *= sign;
//         if (num > INT_MAX) return INT_MAX;
//         if (num < INT_MIN) return INT_MIN;

//         return (int)num;
//     }
// };