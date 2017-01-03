#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int a,b;

    cin>>a;
    cin>>b;

    if(b > 1000 || b < 100)
        return 0;

    int arr[3];
    int temp;

    arr[2] = b/100;
    b %= 100;
    arr[1] = b/10;
    arr[0] = b%10;

    int result[3];
    for(int i=0; i<3; ++i) {
        temp = (int)pow(10,i);
        result[i] = a*arr[i]*temp;
        printf("%d\n", a*arr[i]);
    }

    printf("%d\n", result[0]+result[1]+result[2]);

}

