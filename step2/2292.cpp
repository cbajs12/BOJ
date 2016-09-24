#include <iostream>
using namespace std;

int main(void) {
    int num;

    cin>>num;

    if(num < 1 || num > 1000000000)
        return 0;

    int maxNum = 1;
    int set = 1;

    while(maxNum < num){
        maxNum+=6*set;
        set++;
    }

    printf("%d", set);
}