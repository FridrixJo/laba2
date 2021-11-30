#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Выберите уравнение :\n 1) ax^4 + bx^2 + c = 0;\n 2) ax ^ 4 + bx ^ 3 + cx ^ 2 + bx + a = 0\n 3) x ^ 3 + px + q = 0\n";
    cin >> n;
    switch (n) {
    case 1: 
        double a, b, c;
        cout << "Введите значения : a, b, c\n";
        cin >> a >> b >> c;
        double D;
        D = b * b - 4 * a * c;
        if (a != 0) {
            if (D > 0) {
                double t1, t2;
                t1 = (-b + sqrt(D)) / (2 * a);
                t2 = (-b - sqrt(D)) / (2 * a);
                if (t1 > 0 && t2 > 0) {
                    double x1, x2, x3, x4;
                    x1 = sqrt(t1); x2 = -sqrt(t1);
                    x3 = sqrt(t2); x4 = -sqrt(t2);
                    if (x1 != x3 && x2 != x4) {
                        cout << "корни уравнения : " << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
                    }
                    else if (x1 == x3) {
                        double x01 = x1;
                        cout << "корни уравнения : " << x01 << " " << x2 << " " << x4 << endl;
                    }
                    else if (x2 == x4) {
                        double x02 = x2;
                        cout << "корни уравнения : " << x02 << " " << x1 << " " << x3 << endl;
                    }
                }
                else if (t1 > 0 && t2 < 0) {
                    double x1, x2;
                    x1 = sqrt(t1); x2 = -sqrt(t1);
                    cout << "корни уравнения : " << x1 << " " << x2;
                }
                else if (t2 > 0 && t1 < 0) {
                    double x3, x4;
                    x3 = sqrt(t2); x4 = -sqrt(t2);
                    cout << "корни уравнения : " << x3 << " " << x4;
                }
                else {
                    cout << "нет корней";
                }
            }
            else if (D == 0) {
                double t, x1 ,x2;
                t = -b / (2 * a);
                if (t > 0) {
                    x1 = sqrt(t);
                    x2 = -sqrt(t);
                    cout << "корни уравнения :" << x1 << " " << x2;
                }
                else {
                    cout << "нет корней";
                }
            }
            else {
                cout << "нет корней";
            }
        }
        else {
            cout << "a = 0 !";
        }
        break;
    case 2:
        double a2, b2, c2;
        cout << "Введите значения : a b c\n";
        cin >> a2 >> b2 >> c2;
        if (a2 != 0) {
            double D;
            D = b2 * b2 - 4 * a2 * (c2 - 2 * c2);
            if (D > 0) {
                double t1, t2;
                t1 = (-b2 + sqrt(D)) / (2 * a2);
                t2 = (-b2 - sqrt(D)) / (2 * a2);

                double d1 = t1 * t1 - 4;
                double d2 = t2 * t2 - 4;

                if (d2 > 0) {
                    double x3, x4;
                    x3 = (-t2 + sqrt(d2)) / 2; x4 = (-t2 - sqrt(d2)) / 2;
                    cout << x3 << " " << x4 << " ";
                }
                else if (d2 == 0) {
                    double x;
                    x = (-t2) / 2;
                    cout << x << " ";
                }
                else {
                    cout << "*";
                }

                if (d1 > 0) {
                    double x1, x2;
                    x1 = (-t1 + sqrt(d1)) / 2; x2 = (-t1 - sqrt(d1)) / 2;
                    cout << x1 << " " << x2 << " ";
                }
                else if (d1 == 0) {
                    double x;
                    x = (-t1) / 2;
                    cout << x << " ";
                }
                else {
                    cout << "*";
                }
            }
            else if (D == 0) {
                double t;
                t = -b / (2 * a);
                double d = t * t - 4;
                if (d > 0) {
                    double x1, x2;
                    x1 = (-t + sqrt(d)) / 2; x2 = (-t - sqrt(d)) / 2;
                    cout << "корни уравнения : " << x1 << " " << x2 << endl;
                }
                else if (d = 0) {
                    double x;
                    x = (-t) / 2;
                    cout << "корент уравнения : " << x << endl;
                }
                else {
                    cout << "нет корней" << endl;
                }
                
            }
            else {
                cout << "нет корней";
            }
            
        }
        else {
            cout << "a = 0 !";
        } 
        break;
    case 3:
        cout << "\nВведите значения : p q\n";
        double p, q, f, x;
        cin >> p >> q;

        if (p == 0 && q != 0)
        {
            cout << "x = " << cbrt(-q) << endl;
        }
        else if (q == 0 && p < 0)
        {
            cout << "x1 = " << sqrt(abs(p)) << "x2 = " << sqrt(abs(p)) * -1 << "x3 = 0\n";
        }
        else if (q == 0 && p > 0)
        {
            cout << "\nx = 0\n";
        }
        else if (p == 0 && q == 0)
        {
            cout << "\n x = 0\n";
        }
        else
        {
            x = cbrt(-q / 2.0 + sqrt(pow(q, 2) / 4.0 + pow(p, 3) / 27)) + cbrt(-q / 2.0 - sqrt(pow(q, 2) / 4.0 + pow(p, 3) / 27));
            cout << "x = " << x << endl;
        }

        f = acos((-q / 2 * sqrt(pow((3 / -p), 3))));

        if (f >= 0 && f <= 180)
        {
            cout << "\n x1 = " << 2 * sqrt(-p / 3) * cos(f / 3) << endl;
            cout << "\n x2 = " << 2 * sqrt(-p / 3) * cos(f / 3 + 2 * 3.14159265 / 3) << endl;
            cout << "\n x3 = " << 2 * sqrt(-p / 3) * cos(f / 3 - 2 * 3.14159265 / 3) << endl;
        }
        break;
    default: cout << "Число должно быть от 1 до 3\n";
        break;
    }
    _getch();
    return 0;
}
