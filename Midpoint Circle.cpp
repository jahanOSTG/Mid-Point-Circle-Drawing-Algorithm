#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

void drawCircle(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1 - r;

        while (x < y) {
        x++;
        if (p < 0) {
            p = p + 2 * x + 1;
        } else {
            y--;
            p = p + 2 * (x - y) + 1;
        }

        // 8 symmetric points
        putpixel(xc + x, yc + y, 3);
        putpixel(xc - x, yc + y, 3);
        putpixel(xc + x, yc - y, 3);
        putpixel(xc - x, yc - y, 3);
        putpixel(xc + y, yc + x, 3);
        putpixel(xc - y, yc + x, 3);
        putpixel(xc + y, yc - x, 3);
        putpixel(xc - y, yc - x, 3);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // only for positive integer
    int xc, yc, r;
    cout << "Enter center point coordinate (xc yc): ";
    cin >> xc >> yc;
    cout << "Enter radius of circle R: ";
    cin >> r;

    drawCircle(xc, yc, r);

    getch();
    closegraph();
    return 0;
}

