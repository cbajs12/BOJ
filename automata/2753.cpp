#include <iostream>
using namespace std;

int main(void) {
    int t, c;

    cin>>t;

    if(t<1 || t>4000)
        return 0;

    c = 0;
    if(t%4 == 0){
        c = 1;

        if(t%100 == 0){
            c = 0;

            if(t%400 ==0){
                c = 1;
            }
        }
    }
    printf("%d", c);
}
