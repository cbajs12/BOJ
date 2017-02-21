#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, m, p;

    cin>>a;

    for(int i=0; i<a; ++i){
        cin>>b;
        cin>>c;

        m = b/c;
        p = b%c;
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", m, p);
    }
}

