#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    cout << "enter x y z\n";
    cin >> x >> y >> z;
    if (x < y + z && y < x + z && z < x + y) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}

