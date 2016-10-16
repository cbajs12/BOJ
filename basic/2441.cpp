#include <iostream>
using namespace std;

int main(void){
    int num1;
    int i=0;
    int j;

    cin>>num1;

    if(num1 < 1 || num1 > 100)
        return 0;

    int mid = 0;
    for(i=0; i<num1; ++i){
        for(j=0; j<num1; ++j){
            if(j >= mid)
                printf("%c", '*');
            else
                printf("%c", ' ');
        }
        mid++;
        if(i != num1)
            printf("\n");
    }
}