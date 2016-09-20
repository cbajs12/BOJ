#include <iostream>
using namespace std;

int main(void){
    int num1;

    cin>>num1;

    if(num1 < 1 || num1 > 100000)
        return 0;

    for(int i=1; i<=num1; ++i)
        cout<<i<<endl;
}
