#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> getInput(ssize_t sizeLimit)
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
        if (tokenVector.size() >= sizeLimit) {
            break;
        }
    }
    return tokenVector;
}

int main(void){
//vector<string> words = getInput(1000);

// for_each(words.begin(), words.end(), [] (string word, int count=0) {
//if(word.){
//count+=1;
//}
//});
// #include <memory.h>
//memset(sum, 0, sizeof(int)*MAX);
//memcpy(preSum, sum, sizeof(int)*MAX);
}





