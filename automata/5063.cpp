#include <iostream>
using namespace std;

int main(void){
    int t, a, b, c;

    cin>>t;

    for(int i=0; i<t; ++i){
        cin>>a;
        cin>>b;
        cin>>c;

        if(a<-1000000 || a>1000000)
            return 0;

        if(b<-1000000 || b>1000000)
            return 0;

        if(c<0 || c>1000000)
            return 0;

        if(a > b-c){
            printf("do not advertise\n");
        }else if(a < b-c){
            printf("advertise\n");
        }else{
            printf("does not matter\n");
        }
    }
}

