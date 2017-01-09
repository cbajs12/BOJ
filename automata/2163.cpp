#include <iostream>
using namespace std;

int main(void){
    int N, M;

    cin>>N;
    cin>>M;

    if(N<1 || N>300)
        return 0;

    if(M<1 || M>300)
        return 0;

    printf("%d", N*M-1);
}