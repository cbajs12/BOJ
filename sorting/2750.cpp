#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    int num;

    cin>>num;

    if(num < 1 || num > 1000000)
        return 0;

    int array[num];

    for(int i=0; i<num; ++i){
        cin>>array[i];

        if(abs(array[i]) > 1000000)
            return 0;
    }

    int temp;
    int i = num-1;
    while(i >= 0){
        for(int j=0; j<i; ++j){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        i--;
    }

    for(int i=0; i<num; ++i){
        printf("%d\n", array[i]);
    }
}
