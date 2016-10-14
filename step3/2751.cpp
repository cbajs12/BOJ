#include <iostream>
using namespace std;
int temp[1000000];

void mergeSort(int data[], int left, int right) {
    int i, j, k, middle;
    if(right > left){
        middle = (left+right)/2;

        mergeSort(data, left, middle);
        mergeSort(data, middle+1, right);

        for(i = middle+1; i > left; --i)    // i -> 0
            temp[i-1] = data[i-1];

        for(j = middle; j < right; ++j)     // j -> max
            temp[right+middle-j] = data[j+1];

        for(k = left; k<=right; ++k)
            data[k] = (temp[i] < temp[j] ? temp[i++] : temp[j--]);      //compare temp 0+i & temp max-j
    }
}

int main(void) {
    int num;

    cin>>num;

    if(num < 1 || num > 1000000)
        return 0;

    int array[num];

    for(int i=0; i<num; ++i){
        scanf("%d", &array[i]);

        if(abs(array[i]) > 1000000)
            return 0;
    }

    mergeSort(array, 0, num-1);

    for(int i=0; i<num; ++i){
        printf("%d\n", array[i]);
    }
}

