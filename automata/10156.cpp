#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    int result;

    cin>>a;
    cin>>b;
    cin>>c;

    if(a<1 || a>1000 || b<1 || b>1000 || c<1 || c>100000)
        return 0;

    result = a*b - c;

    if(result < 1)
        result = 0;

    printf("%d", result);

}
