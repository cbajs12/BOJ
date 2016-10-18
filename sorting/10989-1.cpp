#include <iostream>
#include <memory.h>
#define MAX 10000
using namespace std;

int getMax(int arr[], int n ){
    int max = arr[0];
    for(int i = 1; i<n; ++i)
        if(arr[i] > max)
            max = arr[i];

    return max;
}

void countSort(int arr[], int n, int exp){
    int output[n];
    int i, count[10];

    memset(count, 0, sizeof(count));

    for(i=0; i<n; ++i)
        count[(arr[i]/exp)%10]++;

    for(i=1; i<10; ++i)
        count[i] += count[i-1];

    for(i=n-1; i>=0; --i){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(i=0; i<n; ++i)
        arr[i] = output[i];
}

void radixSort(int arr[], int n){
    int m = getMax(arr, n);

    for(int exp=1; m/exp > 0; exp*=10)
        countSort(arr, n, exp);
}

int main(void){
    int num;

    cin>>num;

    int nums[num];
//    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<num; ++i){
        scanf("%d", &nums[i]);
    }

    radixSort(nums, num);

    for(int i=0; i<num; ++i){
        printf("%d\n", nums[i]);
    }

    return 0;
}
