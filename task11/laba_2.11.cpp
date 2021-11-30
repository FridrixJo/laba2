#include <iostream>
using namespace std;
int main()
{
    double a, r, S_square, S_circle;
    cout << "enter a r\n";
    cin >> a >> r;
    const double pi = 3.14;
    S_square = a * a;
    S_circle = pi * r * r;
    if (S_square > S_circle) {
        cout << "square has bigger square";
    }
    else if (S_square == S_circle) {
        cout << "squares of two figures are the same";
    }
    else {
        cout << "circle has bigger square";
    }
    return 0;
}

