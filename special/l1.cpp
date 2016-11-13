#include <iostream>
using namespace std;

int power(int base, int exponent){

    int temp = base;

    for(int i=1; i<exponent; ++i)
        temp *= base;

    return temp;
}

int main(void){
    int base, exponent;
    cin>>base;
    cin>>exponent;

    printf("%d", power(base, exponent));
}
