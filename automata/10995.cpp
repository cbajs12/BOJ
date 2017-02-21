#include <iostream>
using namespace std;

int main(void) {
    int a, f, f2, b;

    cin>>a;

    if(a<1 || a>100)
        return 0;

    f = 0;

    for(int i=0; i<a; i++){
        f2 = 0;
        if(f == 1){
            printf(" ");
        }

        b = a + a-1;
        for(int j=0; j<b; ++j){
            if(f2 == 1){
                printf(" ");
            }else{
                printf("*");
            }

            if(f2 == 1){
                f2 = 0;
            }else{
                f2 = 1;
            }
        }

        if(i != a-1){
            printf("\n");
        }

        if(f == 1){
            f = 0;
        }else{
            f = 1;
        }
    }
}