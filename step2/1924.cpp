#include <iostream>
using namespace std;

int main(void){
    int num1;
    int num2;
    int i=0;
    int year[12];
    char* week[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    cin>>num1>>num2;

    if(num1 < 1 || num1 > 12)
        return 0;

    if(num2 < 1 || num2 > 31)
        return 0;

    if(num1 == 4 || num1 == 6 || num1 == 9 || num1 == 11)
        if(num2 > 30)
            return 0;

    if(num1 == 2)
        if(num2 > 28)
            return 0;

    for(i=0; i<12; ++i){
        if(i == 3 || i == 5 || i == 8 || i == 10){
            year[i] = 30;
        }else if(i == 1){
            year[i] = 28;
        }else {
            year[i] = 31;
        }
    }

    int sum = 0;
    int remainder = 0;
    for(i=0; i<num1-1; ++i){
        sum += year[i];
    }

    sum += num2;
    remainder = sum%7;

    cout<<week[remainder]<<endl;
}
