#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<string> getInput()
{
    vector<string> tokenVector;
    string line;
    getline(cin, line);

    if(line.length() > 1000000)
        return tokenVector;

    istringstream iss(line);
    string token;
    while (getline(iss, token, ' ')) {
        tokenVector.push_back(token);
    }
    return tokenVector;
}

int main(void){
    vector<string> words = getInput();

    int count =0;
    for(int i=0; i<words.size(); ++i){
        if(words[i].find_first_not_of (' ') != words[i].npos)
            count++;
    }

    printf("%d", count);
}

