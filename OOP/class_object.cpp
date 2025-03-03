#include <bits/stdc++.h>
using namespace std;

class Car{
    public: 

    string model;
    int year;

    void display(){
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }

};

int main(){
    Car obj;
    obj.model = "Toyota";
    obj.year = 2020;
    obj.display();
    return 0;
}