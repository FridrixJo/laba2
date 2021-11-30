#include <iostream>
#include <conio.h>
#include <process.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double H, W, h, w, x1, y1, x2, y2, d, n1, n2;
    cout << "Введите ширину и высоту комнаты:\n W H\n";
    cin >> W >> H;
    cout << "Введите координаты первого стола:\n x1 y1 x2 y2\n";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Введите ширину и высоту второго стола:\n w h\n";
    cin >> w >> h;
    double a = x2 - x1, b = y2 - y1;
    double sx1, sx2, sy1, sy2, nx1, ny1, nx2, ny2;
    nx1 = x1; ny1 = y1; nx2 = x2; ny2 = y2;

    if (a + w > W && b + h > H) {
        cout << -1;
        exit(0);
    }

    if ((x1 - w >= 0 && h <= W) || (y1 - h >= 0 && w <= W) || (y2 + h <= H && w <= W) || (x2 + w <= W && h <= H)) {
        cout << 0;
        exit(0);
    }

    if (w + a <= W && h <= H) {
        x1 = w;
        sx1 = w - nx1;
        sx2 = w - (W - nx2);
    }
    else {
        sx1 = 1e9; sx2 = 1e9;
    }

    if (h + b <= H && w <= W) {
        y1 = h;
        sy1 = h - ny1;
        sy2 = h - (H - ny2);
    }
    else {
        sy1 = 1e9; sy2 = 1e9;
    }

    double m[10] = { sx1,sx2,sy1,sy2 }, min = sx1;

    for (int i = 0; i < 4; i++) {
        if (m[i] < min) {
            min = m[i];
        }
    } 

    cout << min;
    
    _getch();
    return 0;
}
