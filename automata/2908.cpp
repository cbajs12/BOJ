#include <iostream>
#include <string>
using namespace std;

int main(void){
    string a, b, at, bt;
    int as, bs;

    cin>>a;
    cin>>b;

    at = "";
    for(long int i=a.length()-1; i>=0; --i)
        at += a[i];

    bt = "";
    for(long int i=b.length()-1; i>=0; --i)
        bt += b[i];

    as = stoi(at);
    bs = stoi(bt);

    if(as > bs)
        printf("%d", as);
    else
        printf("%d", bs);
}

