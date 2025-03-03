#include <bits/stdc++.h>
using namespace std;

class Person{
    public:

    string name;
    int age;

    // Person(){
    //     cout << "Hello, I am person constructor." << endl;
    // }
    // ~Person(){
    //     cout << "Hello, I am person destructor." << endl;
    // }

    Person(string name, int age){
        this -> name = name;
        this -> age = age;
    }


};

class Student : public Person{
    public:

    int roll;

    // Student(){
    //     cout << "Hello, I am student constructor." << endl;
    // }
    // ~Student(){
    //     cout << "Hello, I am student destructor." << endl;
    // }

    Student(string name, int age, int roll) : Person(name, age){
        this -> roll = roll;
    } 

    void getInfo(){
        cout << name << " " << age << " " << roll << endl;
    }
};

int main(){
    // Student obj;
    // obj.name = "Ankur";
    // obj.age = 20;
    // obj.roll = 7310;

    Student obj("Ankur", 20, 7310);
    obj.getInfo();

    return 0;
}