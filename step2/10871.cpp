#include <iostream>
using namespace std;

int main(void) {
    int N, X;
    int temp;

    cin >> N >> X;


    if (N < 1 || N > 10000)
        return 0;

    if (X < 1 || X > 10000)
        return 0;

    int arr[N];

    for(int i=0; i<N; ++i)
        scanf("%d", &arr[i]);

    for(int i=0; i<N; ++i){
        if(arr[i] < 1 || arr[i] > 10000)
            return 0;
    }

    for(int i=0; i<N; ++i)
        if(arr[i] < X)
            printf("%d ", arr[i]);
}