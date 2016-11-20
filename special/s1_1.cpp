#include <iostream>
#include <random>
using namespace std;
const int SIZE = 100;
int arr[SIZE];


int find1(int list[], int x){
    int index = -1;
    int count = 0;

    for(int i=0; i<10; ++i){
        if(x == list[i]){
            index = count;
        }

        ++count;
    }

    return index;
}

int main(void){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int sp[10] = {7,8,9,10,1,2,3,4,5,6};

    printf("%d", find2(sp, 3));
}