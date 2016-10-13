#include <iostream>
using namespace std;

int main(void){
    int num1, num2;

    cin>>num1;
    cin>>num2;

    int n=1, k=1;
    for(int i=num1; i>num1-num2; --i)
        n *= i;

    for(int i=1; i<=num2; ++i)
        k *= i;

    long int result = n/k;

    printf("%ld", result%10007);
}

