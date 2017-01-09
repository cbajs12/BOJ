#include <iostream>
using namespace std;

int main(void){
    int t, a, b;

    cin>>t;

    for(int i=0; i<t; ++i){
        cin>>a;
        cin>>b;

        if(a<0 || a>10)
            return 0;

        if(b<0 || b>10)
            return 0;

        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
}