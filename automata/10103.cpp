#include <iostream>
using namespace std;

int main(void){
    int n, ct, st;
    int c=100, s=100;

    cin>>n;

    if(n<0 || n>15)
        return 0;

    for(int i=0; i<n; ++i){
        cin>>ct;
        cin>>st;

        if(ct<0 || ct>15)
            return 0;

        if(st<0 || st>15)
            return 0;

        if(ct > st){
            s -= ct;
        }else if(ct < st){
            c -= st;
        }
    }

    printf("%d\n", c);
    printf("%d\n", s);
}