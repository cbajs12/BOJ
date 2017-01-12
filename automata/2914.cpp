#include <iostream>
using namespace std;

int main(void) {
    int a,b;

    cin>>a;
    cin>>b;

    if(a<1 || a>100)
        return 0;

    if(b<1 || b>100)
        return 0;

    printf("%d\n", a*(b-1) + 1);
}

