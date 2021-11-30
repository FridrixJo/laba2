#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    int n;
    cout << "enter a b c n\n";
    cin >> a >> b >> c >> n;
    switch (n) {
    case 2:
        cout << b * c - a * a;
        break;
    case 56:
        cout << b * c;
        break;
    case 7:
        cout << a * a + c;
        break;
    case 3:
        cout << a - b * c;
        break;
    default:
        cout << (a + b) * (a + b) * (a + b);
    }
    return 0;
}