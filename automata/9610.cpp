#include <iostream>
using namespace std;

int main(void) {
    int a, b, t;
    int q1=0, q2=0, q3=0, q4=0, ax=0;

    cin>>t;

    if(t<1 || t>1000)
        return 0;

    for(int i=0; i<t; ++i){
        cin>>a;
        cin>>b;

        if(a > 0 && b > 0)
            q1++;
        else if(a > 0 && b < 0)
            q4++;
        else if(a < 0 && b > 0)
            q2++;
        else if(a < 0 && b < 0)
            q3++;
        else if(a == 0 || b == 0)
            ax++;
    }

    printf("Q1: %d\n", q1);
    printf("Q2: %d\n", q2);
    printf("Q3: %d\n", q3);
    printf("Q4: %d\n", q4);
    printf("AXIS: %d\n", ax);
}
