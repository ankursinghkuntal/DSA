#include <bits/stdc++.h>
using namespace std;

// the class contain pure virtual function is called abstract class
class Shape{
    virtual void draw() = 0;  // Pure virtual fucction
};

class Circle : public Shape{
    public:
    void draw(){
        cout << "Drawing a Circle\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}