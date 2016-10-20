#include <iostream>
using namespace std;

int main(void){
    int cases;

    cin>>cases;

    int yonsei=0, korea=0;
    int temp1, temp2;
    for(int i=0; i<cases; ++i){
        for(int j=0; j<9; ++j){
            scanf("%d %d", &temp1, &temp2);
            yonsei += temp1;
            korea += temp2;
        }

        if(yonsei > korea)
            printf("Yonsei\n");
        else if(korea > yonsei)
            printf("Korea\n");
        else
            printf("Draw\n");
    }

    return 0;
}
