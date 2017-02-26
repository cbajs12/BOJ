#include <iostream>
using namespace std;

int main(void) {
    int max, num, n;

    max = 0;
    for(int i=1; i<=9; ++i){
        cin>>n;

        if(n<1 || n>100)
            return 0;

        if(n > max){
            max = n;
            num = i;
        }
    }
    printf("%d\n", max);
    printf("%d", num);
}
