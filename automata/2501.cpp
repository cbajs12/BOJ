#include <iostream>
using namespace std;

int main(void) {
    int p, q, r, t;

    cin>>p;
    cin>>q;

    if(p<1 || p>10000)
        return 0;

    if(q<1 || q>p)
        return 0;

    t = 0;
    r = 0;
    for(int i=1; i<=p; ++i){
        if(p%i == 0){
            t++;

            if(t == q){
                r = i;
                break;
            }

        }
    }
    printf("%d", r);
}
