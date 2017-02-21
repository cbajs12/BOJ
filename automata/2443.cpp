#include <iostream>
using namespace std;

int main(void) {
    int a, n, p, t, j;

    cin>>a;

    if(a<1 || a>100)
        return 0;

    n = 2*a - 1;
    p = 1;

    for(int i=1; i<=a; ++i){

        for(j=1; j<p; ++j){
            printf(" ");
        }


        t = 2*i-1;
        for(j=0; j<n ; ++j){
            printf("*");
        }

        if(i != a)
            printf("\n");

        p++;
        n-=2;
    }
}

