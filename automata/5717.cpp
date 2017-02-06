#include <iostream>
using namespace std;

int main(void){
    int i=0;
    int arr[100];

    while(true){
        int m, f;

        cin>>m;
        cin>>f;

        if(m<1 || m>5){
            arr[i] = 0;
            break;
        }

        arr[i] = m+f;
        ++i;

        if(i>=100)
            return 0;
    }

    i=0;
    while(true){
        if(arr[i] != 0)
            printf("%d\n", arr[i]);
        else
            return 0;

        ++i;
    }
}
