#include <iostream>
using namespace std;
int main(){
    int m;
    cout << "Enter marks: ";
    cin >> m;
    if (m < 0 || m > 100)
        cout << "Invalid";
    else if (m >= 40)
        cout << "Pass";
    else
        cout << "Fail";
    return 0;
}