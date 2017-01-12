#include <iostream>
using namespace std;

int main(void) {
    int a,b,c,d,e;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    if(a<0 || a>100){
        return 0;
    }else if(a < 40){
        a = 40;
    }

    if(b<0 || b>100){
        return 0;
    }else if(b < 40){
        b = 40;
    }

    if(c<0 || c>100){
        return 0;
    }else if(c < 40){
        c = 40;
    }

    if(d<0 || d>100){
        return 0;
    }else if(d < 40){
        d = 40;
    }

    if(e<0 || e>100){
        return 0;
    }else if(e < 40){
         e = 40;
    }

    printf("%d", (a+b+c+d+e)/5);

}
