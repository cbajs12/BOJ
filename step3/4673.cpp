#include <iostream>
using namespace std;

int main(void) {
    int num[10000];
    int temp;
    int n, l;
    int table[10000];

    for(int i=0; i<10000; ++i){
        num[i] = i+1;
        table[i] = 0;
    }

    for(int i=0; i<10000; ++i){
        temp = num[i];

        if(temp < 10){
            l = temp;
            l += temp%10;
            table[l-1] = l;
        }else if(temp < 100){
            n = temp/100;

            if(n == 0){
                l = temp%100;
                l += temp/10;
                l += temp%10;
                table[l-1] = l;

            }else{
                continue;
            }
        }else if(temp < 1000){
            n = temp/1000;

            if(n == 0){
                l = temp%1000;
                l += temp/100;
                n = temp%100;
                l += n/10;
                l += n%10;

                if(l >= 10000)
                    continue;

                table[l-1] = l;
            }else{
                continue;
            }
        }else if(temp < 10000){
            n = temp/10000;

            if(n == 0){
                l = temp%10000;
                l += temp/1000;
                n = temp%1000;
                l += n/100;
                n = n%100;
                l += n/10;
                l += n%10;

                if(l >= 10000)
                    continue;

                table[l-1] = l;
            }else{
                continue;
            }
        }
    }

    for(int i=0; i<10000; ++i){
        if(table[i] == 0) {
            if (i + 1 == 10000)
                continue;

            printf("%d\n", i + 1);
        }
    }

}