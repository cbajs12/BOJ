#include <iostream>
using namespace std;

void baseTriangle(int flag){
    if(flag == 0)
        printf("*\n");
    else if(flag == 1)
        printf("* *\n");
    else if(flag == 2);
        printf("*****\n");
}

int main(void) {
    int t, s, e, temp, sd, flag;

    cin>>t;

    s = t;
    sd = s - 1;
    e = s*2;
    flag = 0;
    for(int i=s; i<e; ++i){
        for(int j=0; j<sd; ++j){
            baseTriangle(flag);
            printf(" ");

        }

        sd--;
        flag++;
        if(i != e-1)
            printf("\n");
    }

}
