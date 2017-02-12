#include <iostream>
using namespace std;

int main(void) {
    int a, b;

    while(true){
        cin>>a;
        cin>>b;

        if(a<=0 || a>=10)
            return 0;

        if(b<=0 || b>=10)
            return 0;

        printf("%d\n", a+b);
    }
}

