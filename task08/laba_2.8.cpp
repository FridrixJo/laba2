#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    double x, y, a, c, z;
    cout << " choose number of function :\n 1) f(x) = 2x\n 2) f(x) = x^3\n 3) f(x) = x/3\n";
    cin >> n;
    switch (n) {
    case 1:
        cout << " enter value of a, c, z\n";
        cin >> a >> c >> z;
        if (z >= 0) {
            x = 2 * z + 1;
        }
        else {
            x = z * z - z;
        }
        y = pow(sin(2 * x), 2) + a * pow(cos(x * x * x), 5) + c * log(pow(x, 2 / 5));
        cout << y;
        break;
    case 2:
        cout << " enter value of a, c, z\n";
        cin >> a >> c >> z;
        if (z >= 0) {
            x = 2 * z + 1;
        }
        else {
            x = z * z - z;
        }
        y = pow(sin(x * x * x), 2) + a * pow(cos(x * x * x), 5) + c * log(pow(x, 2 / 5));
        cout << y;
        break;
    case 3 :
        cout << " enter value of a, c, z\n";
        cin >> a >> c >> z;
        if (z >= 0) {
            x = 2 * z + 1;
        }
        else {
            x = z * z - z;
        }

        y = pow(sin(x/3), 2) + a * pow(cos(x * x * x), 5) + c * log(pow(x, 2 / 5));
        cout << y;
        break;
    default :
        cout << "choose num from 1 to 3\n";
    }
    _getch();
    return 0;
}

