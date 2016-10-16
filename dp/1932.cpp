#include <iostream>
#include <vector>
#include <sstream>
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
    int num;

    cin>>num;

    int nums[num][num];
    for(int i=0; i<num+1; ++i) {
        vector<int> words = getInput(num);

        for (int j = 0; j < words.size(); ++j) {
            nums[i-1][j]=words[j];
        }
    }
//
//    for(int i=0; i<num; ++i){
//        for(int j=0; j<num; ++j){
//            printf("%d ",nums[i][j]);
//        }
//
//        printf("\n");
//    }

    for(int i=num-2; i>=0; --i){
        for(int j=0; j<i+1; ++j){
//            printf("%d %d\n", nums[i+1][j], nums[i+1][j+1]);
                if(nums[i+1][j] > nums[i+1][j+1]){
                    nums[i][j]+=nums[i+1][j];
                }else {
                    nums[i][j]+=nums[i + 1][j + 1];
                }
        }
//        printf("\n");
    }

    printf("%d", nums[0][0]);
}