#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> d;

    if (a > 23 || a < 0)
        return 0;

    if (b > 59 || b < 0)
        return 0;

    if (d > 59 || d < 0)
        return 0;

    cin >> c;

    if (c > 500000 || c < 0)
        return 0;

    d += c;

    int tmp = d / 60;
    d %= 60;

    b += tmp;

    int dex = -1;
    if(b > 59){
        dex = b/60;
        b %= 60;
    }

    if(dex != -1)
        a += dex;

    if (a > 23)
        a %= 24;

    printf("%d %d %d\n", a, b, d);

}
