#include <iostream>
using namespace std;

int main(void) {
    int a, n, p, t1;
    double g, t2;

    cin>>a;

    for(int i=0; i<a; ++i){
        cin>>n;

        if(n<1 || n>10)
            continue;

        p=0, g=0;

        for(int j=0; j<n; ++j){
            cin>>t1;
            cin>>t2;

            p += t1;
            g += t1*t2;
        }

        printf("%d %.1f\n", p, g/p);
    }
}
