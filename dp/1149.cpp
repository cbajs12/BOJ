#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int num;

    cin>>num;

    int R, G, B;
    int preR=0, preG=0, preB=0;
    for(int i=0; i<num; ++i){
        scanf("%d %d %d", &R, &G, &B);

        if(preR==0 && preB==0 && preG==0){
            preB=B;
            preG=G;
            preR=R;
            continue;
        }

        R = min(preB+R, preG+R);
        B = min(preR+B, preG+B);
        G = min(preR+G, preB+G);

        preR=R;
        preG=G;
        preB=B;
    }

    int result;
    if(preR > preB){
        result=preB;
        if(result>preG){
            result=preG;
        }
    }else{
        result=preR;
        if(result>preG){
            result=preG;
        }
    }

    printf("%d\n", result);
}