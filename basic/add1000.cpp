#include <iostream>
using namespace std;

int main(void){
    int num1;
    int num2;

    cin>>num1>>num2;

    if(num1 < 0 || num1 > 10)
        return 0;

    if(num2 < 0 || num2 > 10)
        return 0;

    cout<<num1+num2<<endl;
}
