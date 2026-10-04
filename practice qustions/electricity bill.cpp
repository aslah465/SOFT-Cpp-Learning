#include <iostream>
using namespace std;
int main(){
    int units;
    double bill;
    cout << "Enter units: ";
    cin >> units;
    if (units <= 150)
        bill = units * 5;
    else if (units <= 200)
        bill = 150 * 5 + (units - 150) * 7;
    else
        bill = 150 * 5 + 50 * 7 + (units - 200) * 10;
    cout << "Electricity Bill: " << bill;
    return 0;
}