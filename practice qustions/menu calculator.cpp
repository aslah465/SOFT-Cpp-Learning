#include <iostream>
using namespace std;
int main(){
    double a, b;
char op;
cout << "Enter: number op number\n";
cin  >> a >> op >> b;
 
switch (op)
{
    case '+': cout << a + b; break;
    case '-': cout << a - b; break;
    case '*': cout << a * b; break;
    case '/':
        if (b == 0)
            cout << "Cannot divide by zero";
        else
            cout << a / b;
        break;
    default:
        cout << "Unknown operator";
}
}