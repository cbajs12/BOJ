#include <iostream>
using namespace std;

int main(void) {
    int t, a, s, total;

    cin>>t;

    if(t<1 || t>100)
        return 0;

    s = 1;
    total = 0;
    for(int i=0; i<t; ++i){
        cin>>a;

        if(a == 1){
            total += s;
            s++;
        }else{
            s = 1;
        }
    }
    printf("%d", total);
}
