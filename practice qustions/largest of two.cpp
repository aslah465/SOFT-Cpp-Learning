#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << a;
    else if (b > a)
        cout << b;
    else
        cout << "Equal";
    return 0;
}