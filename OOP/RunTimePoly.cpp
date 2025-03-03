#include <bits/stdc++.h>
using namespace std;


// Function Overriding
// class Parent{
//     public: 

//     void getInfo(){
//         cout << "Parent Class \n";
//     }
// };

// class Student : public Parent{
//     public:
//     void getInfo(){
//         cout << "Student Class \n";
//     }
// };


// virtual function

class Parent{
    public:

    virtual void hello(){
        cout << "Hello, from parent class \n";
    }
};

class Child : public Parent{
    public:

    void hello(){
        cout << "Hello, from child class \n";
    }
};

int main(){
    // Student obj;
    // obj.getInfo();

    // Parent obj;
    // obj.getInfo();

    

    Child obj;
    obj.hello();

    return 0;
}
