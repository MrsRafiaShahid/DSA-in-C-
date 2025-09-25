#include <iostream>
using namespace std;

int main(){
    cout <<"This is calculator.cpp"<< "\n";
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operand (+, -, *, /, %): ";
    char op;
    cin >> op;
    int n=1;
    if(op == '+') n=1;
    else if(op == '-') n=2;
    else if(op == '*') n=3;
    else if(op == '/') n=4;
    else if(op == '%') n=5;
    else n=0;
    switch (n)
    {
    case 1: op== '+';
    cout << "Sum: " << a + b << "\n";
    break;
    case 2: op== '-';
    cout << "Difference: " << a - b << "\n";
        break;
    case 3: op== '*';
    cout << "Product: " << a * b << "\n";
        break;
    case 4: op== '/';
    if(b != 0){
        cout << "Quotient: " << a / b << "\n";
    } else {
        cout << "Cannot divide by zero!" << "\n";
    }
        break;
    case 5: op== '%';
    cout <<"Modulus: " << a % b << "\n";
     /* code */

        break;
    
    default:
    cout << "Invalid operand!" << "\n";
        break;
    }
    // if(b != 0) {
    //     cout << "Quotient: " << a / b << "\n";
    // } else {
    //     cout << "Cannot divide by zero!" << "\n";
    // }
    // cout <<"Modulus: " << a % b << "\n";
    return 0;
}