#include <iostream>
using namespace std;

int main(void) {
    int a, b, r;

    cin>>a;

    if(a<1 || a>500000)
        return 0;

    r = 0;
    for(int i=0; i<a; ++i){
        cin>>b;

        if(b<1 || b>1000)
            continue;

        r += b;
    }
    printf("%d", r-a+1);
}
