 #include <bits/stdc++.h>
using namespace std;

class Teacher{
    private: 
        double salary;

    public:
        string name;
        string dept;
        string subject;
    
        // Non-parameterised  constructor : in this we do not pass any parameter
        // Teacher(){
        //     dept = "Computer Science";
        // }
        
        // Parameterised Constructor : in this we pass parameter in it.
        // Teacher(string n, string d, string s, double sal){
        //     name = n;
        //     dept = d;
        //     subject = s;
        //     salary = sal;
        // }

        Teacher(string name, string dept, string subject, double salary){
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        // custom Copy Constructor
        Teacher(Teacher &OriginalObj){
            this->name = OriginalObj.name;
            this->dept = OriginalObj.dept;
            this->subject = OriginalObj.subject;
            this->salary = OriginalObj.salary;
        }

        void getInfo(){
            cout << name <<" " << dept << " " << subject << " " << salary << endl;
        }

};

int main(){
    // Non-Parameterised
    // Teacher obj;
    
    // obj.name = "Ankur";
    // obj.subject = "OOPs";
    
    // Parameterised
    Teacher obj("Ankur", "CSE", "OOPs", 2500);

    Teacher obj2(obj);     // Default copy constructor will get invoked
    obj2.getInfo();

    return 0;
}