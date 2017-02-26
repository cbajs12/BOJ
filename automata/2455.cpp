#include <iostream>
using namespace std;

int main(void) {
    int in, out, total, max;

    max = 0;
    total = 0;
    for(int i=0; i<4; ++i){
        cin>>out;
        cin>>in;

        total -= out;
        total += in;

        if(max < total)
            max = total;
    }
    printf("%d", max);
}
