#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;

int main(void){
    int num, result;

    cin>>num;
    int nums[num+1];

    memset(nums, 0, sizeof(nums));

    for(int i=1; i<=num; ++i){
        scanf("%d", &nums[i]);
    }

    int map[num+1][2];

    memset(map, 0, sizeof(map));

    map[1][1] = nums[1];
    for(int i=2; i<=num; i++){
        map[i][0] = map[i-1][1] + nums[i];
        map[i][1] = max(map[i-2][0] + nums[i], map[i-2][1] + nums[i]);
    }

    printf("%d", max(map[num][0], map[num][1]));
}