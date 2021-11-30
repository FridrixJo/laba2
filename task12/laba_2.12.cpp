#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x1, y1, x2, y2, r1, r2, d;
    cout << "enter x1 y1  x2 y2  r1 r2\n";
    cin >> x1 >> y1 >> x2 >> y2 >> r1 >> r2;
    d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    if ((r1 > r2 && r1 >= (d + r2)) || (r2 > r1 && r2 >= (d + r1))) {
        cout << "Да, но справедливо обратное для двух фигур";
    }
    else if ((r1 + r2) > d) {
        cout << "Фигуры пересекаются";
    } else {
        cout << "Ни одно условие не выполнено";
    }
    return 0;
}

