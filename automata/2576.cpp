#include <iostream>
using namespace std;

int main(void) {
    int a, n, min;

    n = 0;
    min = 1001;
    for(int i=0; i<7; ++i){
        cin>>a;

        if(a<1 || a>100)
            return 0;

        if(a%2 != 0){
            n += a;

            if(min > a)
                min = a;
        }
    }

    if(n == 0)
        printf("-1");
    else{
        printf("%d\n", n);
        printf("%d", min);
    }
}
