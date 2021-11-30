#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "enter k\n";
    unsigned long k;
    cin >> k;
    if (k == 11 || k % 100 == 11) {
        cout << "мы нашли " << k << " грибов";
    }
    else if (k == 1 || k % 10 == 1) {
        cout << "мы нашли " << k << " гриб";
    }
    else if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4) {
        cout << "мы нашли " << k << " гриба";
    }
    else {
        cout << "мы нашли " << k << " грибов";
    }
    return 0;
}