#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;

    cin>>a;

    for(int i=1; i<=a; ++i){
        cin>>b;
        cin>>c;

        printf("Case %d: %d\n", i, b+c);
    }
}
