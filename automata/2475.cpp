#include <iostream>
using namespace std;

int main(void) {
    int a, r;

    r = 0;
    for(int i=0; i<5; ++i){
        cin>>a;

        r += (a*a);
    }
    r = r%10;

    printf("%d", r);
}

