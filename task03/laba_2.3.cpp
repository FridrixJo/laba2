#include <iostream>
using namespace std;

int main()
{
    cout << "enter a b\n";
    double a, b;
    cin >> a >> b;
    a == b ? cout << "the same\n" :
    (a > b) && (a != b) ? cout << a << endl : cout << b << endl;
    ((a > b) && (a != b)) == !false ? cout << a << endl : cout << b;
    
    system("pause");
    return 0;
}

