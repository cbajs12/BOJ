#include <iostream>
using namespace std;

int main(void) {
   long int a, r, t, t2;

    cin>>a;

    if(a<1 || a>1000)
        return 0;

    r = 0;
    for(long int i=1; i<=a; ++i){

        for(int j=0; j<=i; ++j){
            r += (i+j);
        }
    }
    printf("%ld\n", r);
}

