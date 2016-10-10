#include <iostream>
using namespace std;

int main(void) {
    int num1, num2, num3;
    int result=0;
    int number[10];

    scanf("%d %d %d", &num1,&num2,&num3);

    result = num1*num2*num3;

    for(int i=0; i<10; ++i)
        number[i] = 0;

    int temp;
    while(result != 0){
        temp = result%10;
        result = result/10;
        number[temp]++;
    }

    for(int i=0; i<10; ++i)
        printf("%d\n", number[i]);
}

