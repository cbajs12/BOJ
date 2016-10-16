#include <iostream>
using namespace std;

int main(void){
    int num1;
    int i;

    cin>>num1;

    if(num1 < 1 || num1 > 9)
        return 0;

    for(i=1; i<=9; ++i){
        printf("%d * %d = %d", num1, i, num1*i);
        if(i != 9)
            printf("\n");
    }
}

