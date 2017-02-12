#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    getline(cin, s);

    int j=0, v=10;
    char temp;
    while(j < s.length()){
        if(j == 0){
            temp = s[j];
            ++j;
            continue;
        }

        if(temp == ')'){
            if(s[j] == ')'){
                v+=5;
            }else{
                v+=10;
            }
        }else{
            if(s[j] == ')'){
                v+=10;
            }else{
                v+=5;
            }
        }
        temp = s[j];
        ++j;
    }

    printf("%d", v);
}

