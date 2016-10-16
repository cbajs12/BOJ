#include <iostream>

using namespace std;


int main(void){
    int num;

    cin>>num;

    int temp;
    int count=0;
    int flag;
    for(int i=0; i<num; ++i){
        scanf("%d", &temp);
        if(temp == 1){
            continue;
        }

        flag=0;
        for(int j=2; j<temp; ++j){
            if(temp%j == 0){
                flag++;
                break;
            }

        }

        if(flag == 0)
            count++;
    }

    printf("%d", count);
}

