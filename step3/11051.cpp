#include <iostream>
using namespace std;

int main(void){
    long long int num1, num2;

    cin>>num1;
    cin>>num2;

    long long int n=1, k=1;
    long long int i;

    for(i=num1; i>num1-num2; --i)
        n *= i;

    for(i=1; i<=num2; ++i)
        k *= i;

    long long int result = n/k;

    printf("%lld", result%10007);
}

