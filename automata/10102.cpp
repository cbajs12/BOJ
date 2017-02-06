#include <iostream>
#include <string.h>
using namespace std;

int main(void){
    int a, b, t;
    string s;

    cin>>t;

    if(t<1 || t>15)
        return 0;

    cin>>s;

    a=0, b=0;
    for(int i=0; i<t; ++i){
        if(s[i] == 'A'){
            a++;
        }else{
            b++;
        }
    }

    if(a>b){
        printf("A\n");
    }else if(a<b){
        printf("B\n");
    }else{
        printf("Tie");
    }

}

