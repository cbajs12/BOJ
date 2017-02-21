#include <iostream>
using namespace std;

int main(void) {
    int a, s, n, p, q;
    cin >> a;

    for(int i=0; i<a; ++i){
        cin>>s;

        if(s<1 || s>100000)
            continue;

        cin>>n;

        if(n<0 || n>1000)
            continue;

        if(n == 0){
            printf("%d\n", s);
            continue;
        }

        for(int j=0; j<n; ++j){
            cin>>q;
            cin>>p;

            s += (p*q);
        }
        printf("%d\n", s);
    }
}
