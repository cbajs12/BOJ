#include <iostream>
using namespace std;

int main(void){
    int t, c, n, tmp;

    cin>>t;

    if(t<1 || t>101 || t%2 == 0)
        return 0;

    c = 0, n = 0;

    for(int i=0; i<t; ++i){
        cin>>tmp;

        if(tmp == 1)
            c++;
        else
            n++;
    }

    if(c > n)
        printf("Junhee is cute!");
    else
        printf("Junhee is not cute!");
}
