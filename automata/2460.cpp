#include <iostream>
using namespace std;

int main(void){
    int in, out, max, total;

    max = 0;
    total = 0;
    for(int i=0; i<10; ++i){
        cin>>out;
        cin>>in;

        total = total - out + in;

        if(max < total)
            max = total;
    }
    printf("%d", max);
}

