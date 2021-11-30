#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	cout << "enter x y  k\n";
	int x, y, k;
	cin >> x >> y >> k;
	if (k >= 0) {
		if (abs(x) > k || abs(y) > k || x < 0 || y < 0) {
			cout << "out" << endl;;
			double lenght;
			if (x >= 0 && x <= k && y < 0) {
				lenght = y;
			}
			else if (x >= 0 && x <= k && y > k) {
				lenght = y - k;
			}
			else if (y >= 0 && y <= k && x < 0) {
				lenght = x;
			}
			else if (y >= 0 && y <= k && x > k) {
				lenght = x - k;
			}
			else if (x > k && y > k) {
				lenght = sqrt((x - k) * (x - k) + (y - k) * (y - k));
			}
			else if (x > k && y < 0) {
				lenght = sqrt(y * y + (x - k) * (x - k));
			}
			else if (x<0 && y>k) {
				lenght = sqrt((y - k) * (y - k) + x * x);
			}
			else if (x < 0 && y < 0) {
				lenght = sqrt(x * x + y * y);
			}
			cout << lenght;
		}
		else if (x <= k && x >= 0 && y >= 0 && y <= k) {
			cout << "in\n";
			int l1, l2, l3, l4;
			l1 = x;
			l2 = k - y;
			l3 = k - x;
			l4 = y;
			int a[10] = { l1, l2, l3, l4 };
			int min = a[1];
			for (int i = 0; i <= 3; i++) {
				if (a[i] < min) {
					min = a[i];
				}
			}
			cout << min;
		}
	}
	else {
		if (x < k || y < k || x > 0 || y > 0) {
			cout << "out" << endl;;
			double lenght;
			if (x <= 0 && x >= k && y < k) {
				lenght = y - k;
			}
			else if (x <= 0 && x >= k && y > 0) {
				lenght = y;
			}
			else if (y <= 0 && y >= k && x > 0) {
				lenght = x;
			}
			else if (y <= 0 && y >= k && x < k) {
				lenght = x - k;
			}
			else if (x < k && y < k) {
				lenght = sqrt((x - k) * (x - k) + (y - k) * (y - k));
			}
			else if (x < k && y < k) {
				lenght = sqrt(y * y + (x - k) * (x - k));
			}
			else if (x>0 && y<k) {
				lenght = sqrt((y - k) * (y - k) + x * x);
			}
			else if (x > 0 && y > 0) {
				lenght = sqrt(x * x + y * y);
			}
			cout << lenght;
		}
		else if (x >= k && x <= 0 && y <= 0 && y >= k) {
			cout << "in\n";
			int l1, l2, l3, l4;
			l1 = x;
			l2 = k - y;
			l3 = k - x;
			l4 = y;
			int a[10] = { l1, l2, l3, l4 };
			int min = a[1];
			for (int i = 0; i <= 3; i++) {
				if (a[i] > min) {
					min = a[i];
				}
			}
			cout << min;
		}
	}
	return 0;
}

