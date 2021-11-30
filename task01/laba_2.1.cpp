#include <iostream>
using namespace std;

int main()
{
    cout << "enter a b\n";
    int a, b;
    cin >> a >> b;
    if ((b != 0 && a % b == 0) || (a != 0 && b % a == 0)) {
        cout << "yes";
    }
    else if (a == 0 && b == 0) {
        cout << "error: divide by zero";
    }
    else {
        cout << "no";
    }
    return 0;
}
