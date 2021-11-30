#include <iostream>
#include <vector>
using namespace std;
int main()
{
	cout << "enter x y\n";
	int x, y;
	cin >> x >> y;
	if (x > y) {
		y = 0;
		cout << x << " " << y << endl;
	}
	else if (x < y) {
		x = 0;
		cout << x << " " << y << endl;
	}
	else {
		x = 0;
		y = 0;
		cout << x << " " << y << endl;
	}

	cout << "enter a b c k\n";
	int a[10];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	int max = a[1];
	for (int i = 0; i < 3; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	int k;
	cin >> k;
	max = max - k;
	cout << max;

	return 0;
}


