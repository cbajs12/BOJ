#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s1, s2, ts, rs;
    long int sl1, sl2, c, a, b, i;

    cin>>s1;
    cin>>s2;

    sl1 = s1.length();
    sl2 = s2.length();

    if(sl1 < sl2){
        ts = s2;
        s2 = s1;
        s1 = ts;

        c = sl2;
        sl2 = sl1;
        sl1 = c;
    }

    c = 0;
    ts = "";
    for(i = 0; i < sl1; ++i){
        if(i < sl2){
            a = s1[sl1-i-1] - '0';
            b = s2[sl2-i-1] - '0';

            if((a+b+c)/10 > 0){
                ts += '0' + ((a+b+c)%10);
                c = (a+b+c)/10;
            }else{
                ts += '0' + (a+b+c);
                c = 0;
            }
        }else{
            a = s1[sl1-i-1] - '0';
            if((a+c)/10 > 0){
                ts += '0' + ((a+c)%10);
                c = (a+b+c)/10;
            }else{
                ts += '0' + (a+c);
                c = 0;
            }
        }
    }

    rs = "";
    for(i = 0; i<sl1; ++i){
        rs += ts[sl1-i-1];
    }

    if(c == 0)
        cout<<rs;
    else
        cout<<c<<rs;
}