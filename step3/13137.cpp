#include <iostream>

using namespace std;


int main(void) {
    int num;

    cin>>num;

//    int nums[num];
    int result=0;
    int temp;
    for(int i=0; i<num; ++i){
//        cin>>nums[i];
        cin>>temp;
        result+=temp;
    }

    int flag=0;
    for(int i=2; i<result; ++i){
        if(result%i==0)
            flag=1;
    }

    if(flag==1){
        printf("%s", "YES");
    }else{
        printf("%s", "NO");
    }
//    int money=100000;
//    int temp;
//    int result;
//    while(money>0){
//        temp=0;
//        int tempResult=0;
//        int tempMoney=money;
//        for(int i=num-1; i>=0; --i){
//            temp=tempMoney/nums[num];
//            result += temp;
//            if(temp == 0){
//                continue;
//            }
//            money=tempMoney%nums[num];
//        }
//
//
//        for(int )
//
//        money--;
//    }
}

