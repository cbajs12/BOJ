#include <iostream>
using namespace std;

int main(void){
    long long num1, num2;

    cin>>num1;
    cin>>num2;

    long long n=1, k=1;
    long long i, j;

    long long load[1001][1001];

    for(i=0; i<=num1; ++i){
        for(j=0; j<=num1; ++j){
            load[i][j] = 0;
        }
    }

    for(i=1; i<=num1; ++i){
        if(i==1){
            load[i][0]=1;
            load[i][1]=1;
        }else{
            for(j=0; j<=i; ++j){
                if(j == 0 || i==j){
                    load[i][j] = 1;
                }
                load[i][j] = (load[i-1][j-1] + load[i-1][j]) % 10007;
            }
        }
    }


    printf("%lld", load[num1][num2]);
}

