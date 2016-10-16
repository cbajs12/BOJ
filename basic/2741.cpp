#include <iostream>
using namespace std;

int main(void){
    int num1;
    int i;

    cin>>num1;

    if(num1 < 1 || num1 > 100000)
        return 0;

    for(i=1; i<=num1; i++){
        printf("%d", i);
        if(i != num1)
            printf("\n");
    }
}
