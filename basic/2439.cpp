#include <iostream>
using namespace std;

int main(void){
    int num1;
    int i, j;

    cin>>num1;

    if(num1 < 1 || num1 > 100)
        return 0;

    for(i=1; i<=num1; ++i){
        for(j=num1; j>0; --j){
            if(j > i)
                printf("%c", ' ');
            else
                printf("%c", '*');
        }
        if(i != num1)
            printf("\n");
    }
}