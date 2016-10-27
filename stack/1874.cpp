#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;
    cin>>num;

    int nums[num];

    vector<char> result;
    for(int i=0; i<num; ++i){
        cin>>nums[i];
    }

    vector<int> s;
    int start;
    int temp = 1;
    int pop = 0;
    for(int i=0; i<num; ++i){
        start = nums[i];

        if(start > num){
            printf("NO\n");
            return 0;
        }

        if(temp <= start){
            while(temp <= num){
                result.push_back('+');
                s.push_back(temp);
//                printf("push %d\n", temp);

                if(temp == start){
//                    printf("pop %d\n", s[s.size()-1]);
                    s.pop_back();
                    result.push_back('-');
                    ++temp;
                    ++pop;
                    break;
                }

                ++temp;
            }
        }else {
            int size = (int)s.size() - 1;
            for(int j=size; j>=0; --j){
                result.push_back('-');
                if(s[j] == start) {
//                    printf("pop %d\n", s[j]);
                    s.pop_back();
                    ++pop;
                    break;
                }
            }
        }
    }

    if(pop != num) {
        printf("NO\n");
    }
    else {
        for (int i = 0; i < result.size(); ++i)
            printf("%c\n", result[i]);
    }

    return 0;
}
