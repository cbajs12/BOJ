#include <iostream>

using namespace std;

int countPrime(int num){
    if(num == 1){
        return -1;
    }

    int flag=0;
    for(int j=2; j<num; ++j){
        if(num%j == 0){
            flag++;
            break;
        }

    }

    if(flag == 0)
        return num;

    return -1;
}

int main(void){
    int num1, num2;

    cin>>num1;
    cin>>num2;

    int count = 0;
    int temp;
    int sum=0;
    int min=10001;
    for(int i = num1; i<=num2; ++i){
        temp = countPrime(i);

        if(temp == -1)
            continue;

//        printf("%d\n", temp);
        sum+=temp;

        if(min > i){
            min = i;
        }
    }

    if(sum == 0){
        printf("%d", -1);
    }else{
        printf("%d\n", sum);
        printf("%d", min);
    }


}
