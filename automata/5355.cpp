#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t;

    double a;

    cin>>t;

    for(int i=0; i < t; ++i){
        cin>>a;
        string s;

        getline(cin, s);

        int j=0;
        while(j < s.length()){
            if(s[j] == '#'){
                a -= 7;
            }else if(s[j] == '%'){
                a += 5;
            }else if(s[j] == '@'){
                a *= 3;
            }

            ++j;
        }

        printf("%.2f\n", a);
    }

}

