#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int fact(int a) {
    int s = 1;
    for (int i = 1; i <= a; i++) {
        s *= i;
    }
    return s;
}

int main()
{

    //    option 1

    double m = 0, n = 0, k = 0, x;
    cout << "enter x from -1 to 1 , but except 0\n";
    cin >> x;
    if (x != 0 && x >= -1 && x <= 1) {
        for (int i = 0; i < 5; i++) {
            m += pow((-1), i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
        }
        for (int i = 0; i < 5; i++) {
            n += pow((-1), i) * pow(x, 2 * i) / fact(2 * i);
        }
        x = abs(x) - 1;
        for (int i = 1; i < 10; i++) {
            k += pow((-1),i-1)*pow(x,i) / i;
        }
        cout << "sin(x) = " << m << endl;
        cout << "cos(x) = " << n << endl;
        cout << "ln|x| = " << k << endl;
    }
    else {
        cout << "the value of x has to be from -1 to 1 (except 0)\n";
    }

    //    option 2

    /*double a, b, c, x;
    cout << "enter x\n";
    cin >> x;
    if (x != 0) {
        a = sin(x);
        b = cos(x);
        c = log(abs(x));
        double arr[10] = {a,b,c};
        double min = arr[0];
        for (int i = 0; i < 3; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << min;
    }
    else {
        cout << "NAN";
    }*/

    _getch();
    return 0;
}

