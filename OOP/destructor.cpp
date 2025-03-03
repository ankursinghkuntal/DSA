#include <bits/stdc++.h>
using namespace std;

class Student{

    public:
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    void getInfo(){
        cout << name << " " << *cgpaptr << endl;
    }

    ~Student(){
        delete cgpaptr;
    }
};

int main(){

    Student obj("Ankur", 8.9);
    obj.getInfo();
    return 0;
}
