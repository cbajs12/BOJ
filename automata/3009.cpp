#include <iostream>
using namespace std;

int main(void) {
    int x1, x2, x3, y1, y2, y3;
    int xt, yt;

    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;

    if(x1 == x2)
        xt = x3;
    else if(x1 == x3)
        xt = x2;
    else if(x2 == x3)
        xt = x1;

    if(y1 == y2)
        yt = y3;
    else if(y1 == y3)
        yt = y2;
    else if(y2 == y3)
        yt = y1;

    printf("%d %d",xt, yt);

}

