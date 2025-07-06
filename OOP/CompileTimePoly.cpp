#include <bits/stdc++.h>
using namespace std;

// Constructor Overloading
class Person{

    public:
    string name;

    Person(){
        cout << "Non-Parameterised\n";
    }

    Person(string name){
        cout << "Parameterised\n";
    }
};

// Function Overloading
class Student{
    public:

    string name;
    int age;
    int roll;

    Student(string name, int age, int roll){
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    void display(){
        cout << name << " " << age << " " << roll << endl;
    }

    int getInfo(int age){
        return age;
    }

    string getInfo(string name){
        return name;
    }

};



// Operator Overloading
class Complex{
    
    private:
    int real, img;
    
    public:
    Complex(){
        real = 0;
        img = 0;
    }

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout << real << "+" << img << "i\n"; 
    }

    // Operator overloading syntax
    Complex operator +(Complex c1){
        Complex temp;
        temp.real = real + c1.real;
        temp.img = img + c1.img;
        return temp;
    }

};


// Operator Overloading for Unary Operators
class Weight{
    private:
    int kg;

    public:

    Weight(){
        kg = 0;
    }

    Weight(int kg){
        this->kg = kg;
    }

    void display(){
        cout << "Current Weight is :" << kg << "\n";
    }

    // It works as one way solution    =>     not return obj

    // // Pre Increment
    // void operator ++(){
    //     ++kg;
    // }
    
    // // Post Increment
    // void operator ++(int){
    //     kg++;
    // }
    
    // It works as two way solution
    Weight operator ++(){
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }

};

int main(){

    // Person obj;
    // Person obj("Ankur");



    // Student obj("Ankur", 20, 10);
    // obj.display();
    // cout << obj.getInfo("Arya") << "\n"; 
    // cout << obj.getInfo(19) << "\n";




    // Complex c1(2,3);
    // Complex c2(3,4);
    // Complex c3(4,5);
    // Complex c4;

    // // c3 = c1+c2;   c3 = c1.add(c2)

    // c4 = c1 + c2 + c3;  
    // c4.display();




    // Weight obj;
    // obj.display();
    // obj++;  // obj.operator++()
    // obj.display();
    // ++obj;
    // obj.display();

    
    Weight obj1(2), obj2;
    // obj2 = ++obj1;
    ++obj2;
    obj2.display();

    return 0;
}