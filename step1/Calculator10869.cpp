#include <iostream>
using namespace std;

int main(void){
    int num1;
    int num2;

    cin>>num1>>num2;

    if(num1 < 1 || num1 > 10000)
        return 0;

    if(num2 < 1 || num2 > 10000)
        return 0;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;
}