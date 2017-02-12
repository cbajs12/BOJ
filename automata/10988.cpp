#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;

    cin>>s;

    long j = s.length();

    if(j<1 || j>100)
        return 0;

    if(j%2 == 0){
        for(long i=0; i<s.length()/2; ++i){
            if(s[i] != s[j-1]){
                printf("0");
                return 0;
            }
            --j;
        }
    }else{
        for(long i=0; i<s.length()/2; ++i){
            if(s[i] != s[j-1]){
                printf("0");
                return 0;
            }
            --j;
        }
    }

    printf("1");
}

