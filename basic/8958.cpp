#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    int num;

    cin>>num;

    int results[num];

    char scores[80];
    for(int i=0; i<num; ++i){
        string line;
        cin>>line;

        if(line.length() > 80)
            return 0;

        strcpy(scores, line.c_str());

        int j=0;
        int result=0, temp = 1;
        while(scores[j] != '\0'){
            if(scores[j] == 'O'){
                result += temp;
                temp++;
            }else if(scores[j] == 'X'){
                temp=1;
            }
            j++;
        }
        results[i] = result;
    }

    for(int i=0; i<num; ++i)
        printf("%d\n", results[i]);
}

