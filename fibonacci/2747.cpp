#include <iostream>
using namespace std;

int main(void){
    int num;

    cin>>num;

    int num1, num2, total;
    if(num==1){
        printf("%d", 1);
        return 0;
    }

    for(int i=0; i<num-1; ++i){
        if(i==0){
            num1=0;
            num2=1;
        }

        total = num1+num2;
        num1=num2;
        num2=total;
    }

    printf("%d", total);
}
