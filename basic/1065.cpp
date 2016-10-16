#include <iostream>
using namespace std;

int main(void) {
    int num1;
    int num[1000];
    int count, temp;
    int n, l, k, d;
    int limit;

    cin>>num1;

    if(num1 < 0 || num1 > 1000)
        return 0;

    for(int i=0; i<1000; ++i){
        num[i]=i+1;
    }

    if(num1/10 == 0){
        limit = 10;
    }else if(num1/100 == 0){
        limit = 100;
    }else{
        limit = 1000;
    }

    if(limit == 10){
        count=num1-1+1;
    }else if(limit == 100){
        count=9;
        count+=num1-9;
    }else if(limit == 1000){
        count=99;
        for(int i=99; i<num1; ++i){
            temp = num[i];
            n = temp/100;

            if(n == 0)
                continue;

            temp = temp%100;
            l = temp/10;
            k = temp%10;

            d = l - n;

            if(l + d == k)
                count++;
        }
    }
    printf("%d\n", count);
}