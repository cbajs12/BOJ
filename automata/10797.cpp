#include <iostream>
using namespace std;

int main(void) {
    int a, b, s;

    cin>>a;

    if(a<0 || a>9)
        return 0;

    s = 0;
    for(int i=0; i<5; ++i){
        cin>>b;

        if(b<0 || b>9)
            return 0;

        if(a == b)
            s++;
    }
    printf("%d", s);
}

