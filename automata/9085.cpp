#include <iostream>
using namespace std;

int main(void) {
    int t, n, a, b;

    cin>>t;

    if(t<1 || t>10)
        return 0;

    for(int i=0; i<t; ++i){
        cin>>n;

        if(n<1 || n>100)
            continue;

        a = 0;
        for(int j=0; j<n; ++j){
            cin>>b;

            a += b;
        }
        printf("%d\n", a);
    }
}

