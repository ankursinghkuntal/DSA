#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Student(Student &obj){
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }

    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << name << " " << *cgpaPtr << endl;
    }

};

int main(){

    Student obj("Ankur", 9.1);
    obj.getInfo();
    Student obj2(obj);
    *(obj2.cgpaPtr) = 9.3;
    obj.getInfo();  // here the value of obj student will also get changed due to both pointer points the same address because of shallow copy

    return 0;
}