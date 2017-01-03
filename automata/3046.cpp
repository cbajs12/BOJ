#include <iostream>
using namespace std;

int main(void){
    int r1, s;

    cin>>r1;
    cin>>s;

    if(r1>1000 || r1<-1000)
        return 0;

    if(s>1000 || s<-1000)
        return 0;

    int r2;

    r2 = s*2 - r1;

    printf("%d", r2);
}
