#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d, z;
    cout << "enter a b c d\n";
    cin >> a >> b >> c >> d;
    if (c >= d && a < d && c != 0) {
        z = (a + b) / c;
    }
    else if (c < d && a >= d && c != 0) {
        z = (a - b) / c; 
    }
    else {
        z = 0;
    }
    cout << z;

    return 0;
}

