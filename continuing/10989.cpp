#include <iostream>
using namespace std;
int temp[1000000];


int main(void){
    int num;

    cin>>num;

    int array[num];

    for(int i=0; i<num; ++i){
        scanf("%d", &array[i]);
    }

    for(int i=0; i<num; ++i){
        printf("%d\n", array[i]);
    }
}
