#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, nod, nok, n1, n2;
    cout << "enter a b\n";
    cin >> a >> b;
    n1 = a;
    n2 = b;
    while (b) {
        a %= b;
        swap(a, b);
    }
    nod = a;
    nok = (n1 * n2) / nod;
    cout << nod << " " << nok << endl;
    _getch();
    return 0;
}

