#include <iostream>
using namespace std;

int main(void){
    int num1;
    int num2;
    int num3;

    cin>>num1>>num2>>num3;

    if(num1 < 2 || num1 > 10000)
        return 0;

    if(num2 < 2 || num2 > 10000)
        return 0;

    if(num3 < 2 || num3 > 10000)
        return 0;

    cout<<(num1+num2)%num3<<endl;
    cout<<(num1%num3 + num2%num3)%num3<<endl;
    cout<<(num1*num2)%num3<<endl;
    cout<<(num1%num3 * num2%num3)%num3<<endl;
}