#include <iostream>
#include <memory.h>
using namespace std;

int main(void){
    int num1, num2;

    cin>>num1;
    cin>>num2;

    int count = 0;
    int temp;
    int nums[1000001];
    memset(nums, 0, sizeof(nums));

    nums[1]=1;
    for(int i=2; (i*i)<=1000000; ++i){
        if(nums[i] == 0){
            for(int j=i*i; j<=1000000; j+=i)
                nums[j] = 1;
        }

    }

    for(int i=num1; i<=num2; ++i){
        if(nums[i] == 0)
            printf("%d\n", i);
    }
}
