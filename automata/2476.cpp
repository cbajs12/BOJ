#include <iostream>
using namespace std;

int main(void) {
    int t;
    int a, b, c;
    int result, temp, tt=0;

    cin>>t;

    if(t<2 || t>1000)
        return 0;

    for(int i=0; i<t; ++i){
        cin>>a;
        cin>>b;
        cin>>c;

        if(a == b && a == c)
            result = 10000+a*1000;
        else if(a == b)
            result = 1000+a*100;
        else if(a == c)
            result = 1000+a*100;
        else if(b == c)
            result = 1000+b*100;
        else{
            temp = a;
            if(a < b)
                temp = b;

            if(temp < c)
                temp = c;

            else if(a < c)
                temp = c;

            if(temp < b)
                temp = b;

            result = temp * 100;
        }

        if(tt < result)
            tt = result;
    }

    printf("%d", tt);

}


