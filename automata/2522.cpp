#include <iostream>
using namespace std;

int main(void) {
    int a, n, p, q, f;

    cin>>a;

    if (a < 1 || a > 100)
        return 0;

    n = 2*a -1;
    p=1, q=a-p, f=0;

    for(int i=0; i<n; ++i){
        for(int j=0; j<p; ++j){
            printf("*");
        }
        if(n-1 != i)
            printf("\n");

        if(f == 0){
            p++;
            q--;
        }else{
            p--;
            q++;
        }

        if(p == a){
            f=1;
        }
    }
}

