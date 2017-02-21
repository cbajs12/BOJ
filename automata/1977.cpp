#include <iostream>
using namespace std;

int main(void) {
    int a, b, t, result=0, min=100000;

    cin>>a;
    cin>>b;

    if(a<1 || a>10000 || b<1 || b>10000)
        return 0;

    for(int i=1; i<=100; ++i){
        t= i*i;
        if(t>=a && t<=b){
            if(min>t)
                min = t;

            result += t;
        }
    }

    if(result == 0){
        printf("-1");
    }else{
        printf("%d\n", result);
        printf("%d", min);
    }
}
