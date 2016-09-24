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

    for(int j=0; j<26; ++j){
        for(int i=0; c[i] != '\0'; ++i){
            if(num[j] != -2)
                break;

            if(alphabet[j] == c[i]){
                num[j] = i;
                break;
            }
        }

        if(num[j] == -2)
            num[j] = -1;
    }

    for(int i=0; i<26; ++i){
        printf("%d ", num[i]);
    }
}
