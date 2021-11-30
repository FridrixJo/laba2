#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main() {
    double a, b, c, x, y;
    cout << "enter a b c\n";
    cin >> a >> b >> c;
    cout << "enter x y\n";
    cin >> x >> y;
    if ((x > a && y > b) || (x > b && y > a) ||
        (x > c && y > b) || (x > b && y > c) ||
        (x > a && y > c) || (x > c && y > a)) {
        cout << "posible";
    }
    else {
        cout << "imposible";
    }
    _getch();
    return 0;
}