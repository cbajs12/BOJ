#include <iostream>
using namespace std;

int main(void) {
    int t, a, max;
    float t1, s;

    cin>>t;

    if(t<1 || t>1000)
        return 0;

    float array[t];

    max = 0;
    for(int i=0; i<t; ++i){
        cin>>a;

        if(a<0 || a>100)
            return 0;

        if(max < a)
            max = a;

        array[i] = a;
    }

    s = 0;
    for(int i=0; i<t; ++i){
        t1 = array[i]/max*100;
        s += t1;
    }

    printf("%.2f", s/t);
}

