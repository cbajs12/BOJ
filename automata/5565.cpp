#include <iostream>
using namespace std;

int main(void){
    int a, b, temp;
    cin>>a;

    temp = 0;
    for(int i=0; i<9; ++i){
        cin>>b;

        if(b<0 || b>10000)
            return 0;

        temp += b;
    }

    printf("%d\n", a-temp);
}
