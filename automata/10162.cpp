#include <iostream>
using namespace std;

int main(void){
    int a, b, c, t;
    int m, d, l, k;
    cin>>t;

    if(t<1 || t>10000)
        return 0;

    a = 300;
    b = 60;
    c = 10;

    m = t/a;
    d = t%a;
    l = d/b;
    k = d%b;

    if(k%c != 0){
        printf("-1");
    }else{
        printf("%d %d %d", m, l, k/c);
    }
}

