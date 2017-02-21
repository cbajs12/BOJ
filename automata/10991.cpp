#include <iostream>
using namespace std;

int main(void) {
    int a, t, t2, t3, f;

    cin >> a;

    if (a < 1 || a > 100)
        return 0;

    t = a;
    t2 = a - 1;
    t3 = 1;
    for(int i=0; i<a; ++i){

        for(int j=0; j<t2; ++j){
            printf(" ");
        }

        f = 0;
        for(int j=0; j<t3; ++j){
            if(f == 0){
                printf("*");
                f = 1;
            }else{
                printf(" ");
                f = 0;
            }
        }

        t++;
        t2--;
        t3 = t - t2;
        if(a-1 != i){
            printf("\n");
        }
    }
}

