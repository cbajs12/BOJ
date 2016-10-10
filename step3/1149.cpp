#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> getInput(ssize_t sizeLimit)
{
    vector<int> tokenVector;
    string line;
    getline(cin, line);
    istringstream iss(line);
    string token;
    while (getline(iss, token, ' ')) {
        try {
            tokenVector.push_back(stoi(token));
        } catch (exception& e) {
            continue;
        }
        if (tokenVector.size() >= sizeLimit) {
            break;
        }
    }
    return tokenVector;
}

int main(void) {
    int num, t;
    int min, start, result;

    cin>>t;

    if(t > 1000 || t < 1)
        return 0;

    int nums[t][3];

    for(int i = 0; i<t; ++i){
        vector<int> numbers = getInput(3);
        nums[i][0] = numbers[0];
        nums[i][1] = numbers[1];
        nums[i][2] = numbers[2];
    }

    min = 0;
    for(int j=0; j<3; ++j){
        min = nums[0][j];
        for(int i = 1; i<t; ++i){
            for(int k=0; k<3; ++k){
//                nums[]
            }
        }
        if(result < min)
            result = min;
    }

    printf("result = %d\n", result);
}