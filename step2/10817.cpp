#include <iostream>
using namespace std;

int main(void) {
    int num1, num2, num3;
    int result=0;

    cin >> num1 >> num2 >> num3;

    if (num1 < 1 || num1 > 100)
        return 0;

    if (num2 < 1 || num2 > 100)
        return 0;

    if (num3 < 1 || num3 > 100)
        return 0;


    if(num1 >= num2 && num2 >= num3)
        result = num2;
    if(num3 >= num2 && num2 >= num1)
        result = num2;

    if(num2 >= num1 && num1 >= num3)
        result = num1;
    if(num3 >= num1 && num1 >= num2)
        result = num1;

    if(num1 >= num3 && num3 >= num2)
        result = num3;
    if(num2 >= num3 && num3 >= num1)
        result = num3;

    printf("%d", result);
}