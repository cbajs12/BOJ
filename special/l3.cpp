#include <memory.h>
#include <iostream>
#define MAX 1000000;
using namespace std;

int checkSally(int arr[], int size){
    int max = 0;
    int min = MAX;
    int result = 0;
    int resultArry[size];
    memset(resultArry, 0, size);
    for(int i=0; i<size; ++i){
        if(arr[i] > max){
            max = arr[i];
            resultArry[i]++;
        }
    }

    for(int i=size-1; i>=0; --i){
        if(arr[i] < min){
            min = arr[i];
            resultArry[i]++;
        }
    }

    for(int i=0; i<size; ++i){
        if(resultArry[i] == 0)
            result++;
    }

    return result;
}


int main(void){
    int size;
    cin>>size;


    int arr[size];
    int result;

    arr = {1,2,3,4,6};
    result = checkSally(arr, size);


    if(result > 0)
        printf("Sally exist");
    else
        printf("Sally do not exist");
}


