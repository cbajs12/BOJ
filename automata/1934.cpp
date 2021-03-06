#include <iostream>
using namespace std;

int main(void) {
    int tt;
    long int a, b, gcd, lcd, t, a2, b2;

    cin>>tt;
    for(int i=0; i<tt; ++i){
        cin>>a;
        cin>>b;

        if(a<1 || a>45000 || b<1 || b>45000)
            return 0;

        if(a < b){
            t = b;
            b = a;
            a = t;
        }

        a2 = a;
        b2 = b;

        while((a2/b2) != 0){
            t = a2%b2;
            a2 = b2;
            b2 = t;

            if(b2 == 0)
                break;
        }

        gcd = a2;
        lcd = gcd * (a/gcd) * (b/gcd);

        printf("%ld\n", lcd);
    }
}
