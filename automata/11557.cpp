#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t, k, p, tp;
    string s, ts;

    cin>>t;
    for(int i=0; i<t; ++i){
        cin>>k;

        for(int j=0; j<k; ++j){
            cin>>ts;
            cin>>tp;

            if(j == 0){
                s = ts;
                p = tp;
            }else{
                if(p < tp){
                    s = ts;
                    p = tp;
                }
            }
        }
        cout<<s<<endl;
    }
}

