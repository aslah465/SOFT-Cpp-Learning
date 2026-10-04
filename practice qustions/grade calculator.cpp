#include <iostream>
using namespace std;
int main(){
    int m;
    char g;
    cout << "Enter marks: ";
    cin >> m;
    if (m >= 90)
        g = 'A';
    else if (m >= 80)
        g = 'B';
    else if (m >= 70)
        g = 'C';
    else if (m >= 60)
        g = 'D';
    else
        g = 'F';
    cout << "Grade: " << g;

    return 0;
}