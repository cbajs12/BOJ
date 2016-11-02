#include <iostream>
#include <string>
using namespace std;

bool isMirror(string str){
    for(int i=0; i<str.length()/2; ++i){
        if(str[i] != str[str.size() - 1 - i])
            return false;
    }

    return true;
}
int main(void){
    const int MAX = 2000;
    string str;

    cin>>str;

    string tmp;
    string tmp2;
    int count[MAX];

    count[1] = 1;
    count[2] = 2;

    for(int i=3; i<=str.length(); ++i){
        tmp = str.substr(0, i);

        if(isMirror(tmp)){
            count[i] = 1;
        }else{
            int ct = count[i-1] + 1;
            for(int j=2; j<=tmp.length(); ++j){
                tmp2 = tmp.substr(i-j, j);
                ct = min(ct, (isMirror(tmp2) ? count[i-j]+1 : count[i-j]+j));
            }

            count[i] = ct;
        }
    }

    cout<<count[str.length()]<<endl;
}
