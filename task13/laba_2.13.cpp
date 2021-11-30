#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, p, q, h;
    cout << "enter r p q\n";
    cin >> r >> p >> q;
    h = sin(q / 57.2958) * p;
    if (h / 2 > r) {
        cout << "posible";
    }
    else {
        cout << "imposible";
    }
    return 0;
}

