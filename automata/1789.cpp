#include <iostream>
using namespace std;

int main(){
    long int num;
    long int n = 1;
    cin>>num;

    while(true){
        if(n*(n+1) > 2*num){
            n = n - 1;
            break;
        }
        n++;
    }
    printf("%ld", n);
}

