#include <iostream>
using namespace std;
int fibonacci(int n);
static int z, o;

int main(void) {
    int num, t;

    cin>>t;

    int nums[t][2];

    for(int i = 0; i<t; ++i){
        cin>>num;
        if(num<0 || num>40)
            return 0;

        z=0;
        o=0;
        fibonacci(num);
        nums[i][0] = z;
        nums[i][1] = o;
    }

    for(int i=0; i<t; ++i)
        printf("%d %d\n", nums[i][0], nums[i][1]);
}


int fibonacci(int n) {
    if (n==0) {
        ++z;
        return 0;
    } else if (n==1) {
        ++o;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}