#include <bits/stdc++.h>
using namespace std;

class Teacher{
    private: 
        double salary;
    public:
        string name;
        string dept;
        string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    //  setter function : these are generally used to set the values of private data members
    void setSalary(double s){
        salary = s;
    }

    // getter function : these are generally used to get the values of the private data members
    double getSalery(){
        return salary;
    }

};

int main(){
    Teacher obj;

    obj.name = "Ankur";
    obj.dept = "CSE";
    obj.subject = "OOPs";
    // obj.salary = 1200;

    obj.setSalary(2500);
    cout << obj.getSalery() << endl;

    return 0;
}