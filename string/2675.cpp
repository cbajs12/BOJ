#include <iostream>
using namespace std;

int main(void) {
    int num1, R;
    char c[21];

    cin>>num1;

    if(num1 < 1 || num1 > 1000)
        return 0;

    for(int i=0; i<num1; ++i){
        cin>>R>>c;

        if(R < 1 || R > 8)
            return 0;

        for(int k=0; c[k] != '\0'; ++k)
            for(int j=0; j<R; ++j){
                printf("%c", c[k]);
            }

        printf("\n");
    }
}

