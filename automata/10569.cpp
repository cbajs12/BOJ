#include <iostream>
using namespace std;

int main(void) {
    int t, v, e, r;

    cin>>t;

    if(t<1 || t>100)
        return 0;

    for(int i=0; i<t; ++i){
        cin>>v;
        cin>>e;

        if(v<4 || v>100 || e<4 || e>100)
            return 0;

        r = e - v + 2;

        printf("%d\n", r);
    }

}


