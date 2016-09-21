#include <iostream>
using namespace std;

int main(void){
    int num1;
    int i;

    cin>>num1;

    if(num1 < 1 || num1 > 100000)
        return 0;

    for(i=num1; i>0; --i){
        printf("%d", i);
        if(i != 1)
            printf("\n");
    }
}
