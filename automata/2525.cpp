#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;

    cin >> a;
    cin >> b;

    if (a > 23 || a < 0)
        return 0;

    if (b > 59 || b < 0)
        return 0;

    cin >> c;

    if (c > 1000 || c < 0)
        return 0;

    b += c;

    int tmp = b / 60;
    b %= 60;

    a += tmp;

    if (a > 23)
        a -= 24;

    printf("%d %d\n", a, b);

}