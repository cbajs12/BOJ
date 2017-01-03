#include <iostream>
using namespace std;

int main(void){
    int a, b;

    cin>>a;
    cin>>b;

    if(a > 10 || a < 0)
        return 0;

    if(b > 10 || b < 0)
        return 0;

    int c = a+b;

    if(c > 10)
        return 0;

    printf("%d", c);
}
