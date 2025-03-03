// #include<bits/stdc++.h>
// using namespace std;

// void fun(){
//     static int x = 0;// using static keyword the initialisation takes place only once  and rest function will execute in next function calls
//     int y = 0;

//     cout << "x :" << x << endl;
//     cout << "y :" << y << endl;
//     x++;
//     y++;
// }

// int main(){

//     fun();
//     fun();
//     fun();
//     fun();

//     return 0;
// }






// static Objects    => NOT clear

#include <bits/stdc++.h>
using namespace std;

class ABC{
public:

    ABC(){
        cout << "Constructor \n";
    }

    ~ABC(){
        cout << "Dectructor \n";
    }

};

int main(){

    // static ABC obj1;
    ABC obj;
    cout << "end of main function." << endl;
    return 0;
}