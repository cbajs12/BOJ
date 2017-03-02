#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string a, c;
    char b;
    long al, cl;

    cin>>a;
    cin>>b;
    cin>>c;

    al = a.length();
    cl = c.length();

    if(b == '*'){
        for(int i=0; i<cl-1; ++i){
            a += '0';
        }
    }else{
        if(al == cl){
            a[0] = '2';
        }else if(al > cl){
            a[al-cl] = '1';
        }else{
            c[cl-al] = '1';
            a = c;
        }
    }
    cout<<a;
}

