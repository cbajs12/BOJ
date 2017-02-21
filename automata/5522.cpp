#include <iostream>
using namespace std;

int main(void) {
    int a, sum;

    sum = 0;
    for(int i=0; i<5; ++i){
        cin>>a;

        if(a<0 || a>100)
            continue;

        sum += a;
    }
    printf("%d", sum);
}

