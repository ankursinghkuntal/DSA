#include <bits/stdc++.h>
using namespace std;

void fibbo(int n, int a, int b){

    if(n > 0){
        fibbo(n-1, b, a+b);
        cout << a << " ";
    }
    else return;
}


int main(){
    int n;
    cin >> n;

    fibbo(n, 0, 1);

    return 0;
}