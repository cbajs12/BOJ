#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(void){
    vector<string> arr;
    arr.push_back("BAT");
    arr.push_back("OIL");
    arr.push_back("LAB");
    arr.push_back("TWO");

    multimap<char, char> m;

    string temp;
    int count = 0;
    for(int i=0; i<arr.size(); ++i){
        m.insert(make_pair(arr[i][0], arr[i][2]));
    }

    multimap<char, char>::iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

}

