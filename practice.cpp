#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;
    
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    
    return postfix;
}

string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());
    for (char &c : infix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }
    string postfix = infixToPostfix(infix);
    reverse(postfix.begin(), postfix.end());
    return postfix;
}

string postfixToInfix(string postfix) {
    stack<string> s;
    for (char c : postfix) {
        if (isalnum(c)) {
            s.push(string(1, c));
        } else {
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            s.push("(" + op1 + c + op2 + ")");
        }
    }
    return s.top();
}

string postfixToPrefix(string postfix) {
    stack<string> s;
    for (char c : postfix) {
        if (isalnum(c)) {
            s.push(string(1, c));
        } else {
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            s.push(c + op1 + op2);
        }
    }
    return s.top();
}

string prefixToInfix(string prefix) {
    stack<string> s;
    reverse(prefix.begin(), prefix.end());
    for (char c : prefix) {
        if (isalnum(c)) {
            s.push(string(1, c));
        } else {
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            s.push("(" + op1 + c + op2 + ")");
        }
    }
    return s.top();
}

string prefixToPostfix(string prefix) {
    stack<string> s;
    reverse(prefix.begin(), prefix.end());
    for (char c : prefix) {
        if (isalnum(c)) {
            s.push(string(1, c));
        } else {
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            s.push(op1 + op2 + c);
        }
    }
    return s.top();
}

int main() {
    string expression;
    int choice;
    cout << "Enter expression: ";
    cin >> expression;
    cout << "Choose conversion type:\n";
    cout << "1. Infix to Postfix\n2. Infix to Prefix\n3. Postfix to Infix\n4. Postfix to Prefix\n5. Prefix to Infix\n6. Prefix to Postfix\n";
    cin >> choice;
    
    switch (choice) {
        case 1: cout << "Postfix: " << infixToPostfix(expression) << endl; break;
        case 2: cout << "Prefix: " << infixToPrefix(expression) << endl; break;
        case 3: cout << "Infix: " << postfixToInfix(expression) << endl; break;
        case 4: cout << "Prefix: " << postfixToPrefix(expression) << endl; break;
        case 5: cout << "Infix: " << prefixToInfix(expression) << endl; break;
        case 6: cout << "Postfix: " << prefixToPostfix(expression) << endl; break;
        default: cout << "Invalid choice!" << endl;
    }
    return 0;
}
