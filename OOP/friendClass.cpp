#include <bits/stdc++.h>
using namespace std;

class myClass1{
    friend class myClass2;  // declaration of friend class
private:
    int x;
public:
    myClass1(int x){
        this -> x = x;
    }
};

class myClass2{
public:
    void getData(myClass1 obj){
        cout << "Value of x : " << obj.x << endl;
    }
};

int main(){
    myClass1 obj(5);

    myClass2 obj2;
    obj2.getData(obj);

    return 0;
}