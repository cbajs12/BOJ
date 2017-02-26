#include <iostream>
using namespace std;

int main(void) {
    int a, r;

    cin>>a;

    if(a<0 || a>12)
        return 0;

    if(a == 0){
        printf("1");
    }else{
        r=1;
        for(int i=1; i<=a; i++)
            r*=i;

        printf("%d", r);
    }
}