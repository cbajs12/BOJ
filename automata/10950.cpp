#include <iostream>
using namespace std;

int main(void) {
    int a, b, t;

    cin>>t;

    for(int i=0; i<t; ++i){
        cin>>a;
        cin>>b;

        printf("%d\n", a+b);
    }
}

