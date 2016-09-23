#include <iostream>
using namespace std;

int main(void) {
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int num[26];
    char c[101];

    for(int i=0; i<26; ++i){
        num[i] = -2;
    }

    scanf("%s", &c);

    for(int i=0; c[i] != '\0'; ++i){
        for(int j=0; j<26; ++j){
            if(num[j] != -2)
                continue;

            if(alphabet[j] == c[i]){
                printf("%c",c[i]);
                printf("%d", j);
                printf("\n");
                num[j] = j;
            }else{
                num[i] = -1;
            }
        }
    }

    for(int i=0; i<26; ++i){
        printf("%d ", num[i]);
    }
}
