#include <iostream>
using namespace std;

int main(void) {
    int a, z, o;

    for(int i=0; i<3; ++i){
        z = 0;
        o = 0;
        for(int j=0; j<4; ++j){
            cin>>a;

            if(a == 0)
                z++;
            else
                o++;
        }

        if(z == 4)
            printf("D\n");
        else if(o == 4)
            printf("E\n");
        else if(z == 1 && o == 3)
            printf("A\n");
        else if(z == 2 && o == 2)
            printf("B\n");
        else if(z == 3 && o == 1)
            printf("C\n");
    }
}

