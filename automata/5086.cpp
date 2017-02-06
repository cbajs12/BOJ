#include <iostream>
using namespace std;

int main(void){
    int a, b;

    while(true){
        cin>>a;
        cin>>b;

        if(a == 0 && b == 0)
            break;

        if(a/b == 0){
            printf("factor\n");
            continue;
        }else if(a%b == 0){
            printf("multiple\n");
            continue;
        }else{
            printf("neither\n");
            continue;
        }
    }
}
