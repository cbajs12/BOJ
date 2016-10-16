#include <iostream>
using namespace std;

int main(void){
    int num1;

    cin>>num1;

    if(num1 < 0 || num1 > 100)
        return 0;

    if(num1 >= 90 && num1 <= 100){
        printf("%c",'A');
    }else if(num1 >= 80 && num1 <= 89){
        printf("%c",'B');
    }else if(num1 >= 70 && num1 <= 79){
        printf("%c",'C');
    }else if(num1 >= 60 && num1 <= 69){
        printf("%c",'D');
    }else{
        printf("%c",'F');
    }
}