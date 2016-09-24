#include <iostream>
using namespace std;

int main(void) {
    int num;

    cin>>num;

    if(num < 1 || num > 1000000000)
        return 0;

    int maxNum = 1;
    int set = 1;

    while(maxNum <= num){
        maxNum+=set;
        set++;
    }

    int mid = set - 1;
    int start = maxNum - mid - 1;
    int move = num - start;

    if(mid%2==0){
        for(int i=1; i<=move; ++i){
            if(i==move)
                printf("%d/%d", i, mid);

            mid--;
        }
    }else{
        for(int i=1; i<=move; ++i){
            if(i==move)
                printf("%d/%d", mid, i);

            mid--;
        }
    }
}