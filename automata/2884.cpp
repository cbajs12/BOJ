#include <iostream>
using namespace std;

int main(void){
    int a, b;

    cin>>a;
    cin>>b;

    if(a<0 || a>23)
        return 0;

    if(b<0 || a>59)
        return 0;

    if(a == 0 && b <= 45){
        a = 23;
        b -= 45;

        if(b == 0)
            b = 0;
        else
            b += 60;
    }else{
        b -=45;

        if(b < 0){
            a -= 1;
            b += 60;
        }else if(b == 0){
            b = 0;
            a -= 1;
        }
    }

    printf("%d %d\n", a, b);
}