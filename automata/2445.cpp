#include <iostream>
using namespace std;

int main(void) {
    int a, n, p, q, f, l;

    cin >> a;

    if (a < 1 || a > 100)
        return 0;

    n = 2 * a - 1;
    p=1, q=2*a-2, f=0, l=2*a;

    for(int i=0; i<n; ++i){
        for(int j=0; j<p; ++j){
            printf("*");
        }
        for(int j=0; j<q; ++j){
            printf(" ");
        }
        for(int j=q+p; j<l; ++j){
            printf("*");
        }

        if(n-1 != i)
            printf("\n");

        if(f == 0){
            p++;
            q-=2;
        }else{
            p--;
            q+=2;
        }

        if(p == a){
            f=1;
        }
    }
}
