#include <iostream>
using namespace std;

int main(void){
    int t, total, temp, max;
    int arr[10][2];
    total = 0;
    max = -1;

    for(int i=0; i<10; ++i){
        for(int j=0; j<2; ++j){
            arr[i][j] = 0;
        }
    }

    for(int i=0 ; i<10; ++i){
        cin>>t;
        total += t;

        arr[i][0] = t;

        for(int j=0; j<10; ++j){
            if(t == arr[j][0]){
                temp = j;
                break;
            }else{
                temp = -1;
            }
        }
        if(temp != -1)
            arr[temp][1]++;
    }

    for(int i=0; i<10; ++i){
        if(max < arr[i][1]){
            max = arr[i][1];
            temp = i;
        }
    }

    printf("%d\n", total/10);
    printf("%d", arr[temp][0]);
}
