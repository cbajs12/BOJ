#include <iostream>
using namespace std;

int main(void){
    double num1;
    double num2;
    double result;

    cin>>num1>>num2;

    if(num1 < 0 || num1 > 10)
        return 0;

    if(num2 < 0 || num2 > 10)
        return 0;

    result=num1/num2;

    cout<<fixed;
    cout.precision(9);
    cout<<result<<endl;
}