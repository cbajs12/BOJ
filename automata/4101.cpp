#include <iostream>
using namespace std;

int main(void){
    int a, b;

    while(true){
        cin>>a;
        cin>>b;

        if(a<1 || a>1000000){
            break;
        }

        if(b<1 || b>1000000){
            break;
        }

        if(a > b){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}

