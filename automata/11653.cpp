#include <iostream>
using namespace std;

int main(void) {
    int a, n;

    cin>>n;

    if(n<=1)
        return 0;

    a=2;

    while(true){
        if(a==n){
            printf("%d\n", a);
            return 0;
        }


        if(n%a == 0){
            printf("%d\n", a);
            n = n/a;
        }else{
            a++;
        }
    }
}

