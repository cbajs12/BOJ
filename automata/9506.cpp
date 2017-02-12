#include <iostream>
using namespace std;

int main(void){
    int t, m, tmp;

    while(true){
        cin>>t;

        if(t <= 2 || t >= 100000)
            return 0;

        m = t/2;

        tmp = 0;

        for(int i=1; i<=m; ++i){
            if(t%i == 0)
                tmp+=i;
        }

        if(tmp == t){
            printf("%d = 1", t);

            for(int i=2; i<=m; ++i){
                if(t%i == 0){
                    printf(" + %d", i);
                }
            }
            printf("\n");
        }else{
            printf("%d is NOT perfect.\n", t);
        }
    }
}

