#include <iostream>
using namespace std;

int main(void) {
    int t, a, s, m, p, r;

    cin>>t;

    if(t<1 || t>100)
        return 0;

    r=0;
    for(int i=0; i<t; ++i){
        cin>>s;
        cin>>a;

        if(a<1 || a>100)
            return 0;

        if(s<1 || s>100)
            return 0;

        m = a/s;
        p = a%s;

        r+=p;
    }

    printf("%d", r);
}

