#include <iostream>
using namespace std;

int main(void){
    int num1;
    int num2;
    double result;
    int result2;
//    int arr[100] = new int;
    cin>>num1>>num2;

    if(num1 < 0 || num1 > 10)
        return 0;

    if(num2 < 0 || num2 > 10)
        return 0;


    result=num1/num2;

    cout<<result<<endl;
    cout<<result2<<endl;
}