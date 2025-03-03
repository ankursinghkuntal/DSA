#include<bits/stdc++.h>
using namespace std;

class Distance{
private:
    int meters;
public:
    Distance(){
        meters = 0;
    }

    void getData(){
        cout << "Distance : " << meters << endl;
    }

    friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
    d.meters = d.meters+5;
}


int main(){

    Distance obj;
    obj.getData();
    
    // friend function call
    addValue(obj);  // pass the object by reference
    obj.getData();

    return 0;
}