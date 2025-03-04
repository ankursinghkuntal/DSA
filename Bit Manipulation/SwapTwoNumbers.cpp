#include <bits/stdc++.h>
using namespace std;

void Swap_two_numbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Swap_two_numbers1(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b; 
}

void Swap_two_numbers2(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b; 
}

int main(){
    int a = 2;
    int b = 3;
    Swap_two_numbers2(a,b);
    cout << "a : " << a <<endl;
    cout << "b : " << b << endl;
}