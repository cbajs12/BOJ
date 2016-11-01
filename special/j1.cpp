#include <iostream>
#include <list>
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

    list<int> l;
    for(int i=0; i<str.length(); ++i){
        ++m[str[i]];
    }

    map<char, int>::iterator iter;

    for(iter=m.begin(); iter != m.end(); ++iter){
        printf("%c %d\n", iter->first, iter->second);
        l.push_back((int)(iter->first) * (iter->second));
    }

    list<int>::iterator it;
    list<char> result;

    l.sort();
    int temp;

    for(it=l.begin(); it != l.end(); ++it){
        if(*it == 0){
            continue;
        }

        printf("%d\n", *it);
        for(iter=m.begin(); iter !=m.end(); ++iter){
            temp = (int)(iter->first) * (iter->second);
            if(temp == *it){
                for(int i=0; i < iter->second; ++i){
                    result.push_back(iter->first);
                }
            }
        }
    }

    list<char>::iterator re;

    for(re=result.begin(); re != result.end(); ++re){
        printf("%c", *re);
    }


}

