#include <iostream>
using namespace std;

int main(void){
    int num1;
    int i;
    int sum = 0;

    cin>>num1;

    if(num1 < 1 || num1 > 10000)
        return 0;

    for(i=1; i<=num1; ++i){
        sum += i;
    }
    printf("%d", sum);
}
