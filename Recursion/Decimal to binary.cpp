// User function Template for C++

string decTObin(int n){
    if(n == 0) return "";  // base case for recursion
    return decTObin(n / 2) + char((n % 2) + '0');
}

void toBinary(int n) {
    if(n == 0){  
        cout << "0" << endl;
        return;
    }
    string str = decTObin(n);
    cout << str << endl;
}
