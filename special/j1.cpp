#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(void){
    string str;

    cin>>str;

    map<char, int> m;

    char tmp = 65;
    for(char i=65; i<=90; ++i){
        m[i] = 0;
    }

    for(int i=0; i<str.length(); ++i){
        ++m[str[i]];
    }

    vector result;

    int size=0;
    for(int i=0; i<26; ++i){
        if(size < v[i].size())
            size = (int)v[i].size();
    }

    for(int i=0; i<size; ++i){
        for(int j=0; j<26; ++j){
            if(v[j].size() == i){

            }
        }
    }




}

