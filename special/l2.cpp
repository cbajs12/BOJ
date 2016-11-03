#include <string>
#include <iostream>
using namespace std;

int checkBracket(string str){
    int result = 0;
    int flag1 = 0;
    int flag2 = 0;

    for(int i=0; i<str.length(); ++i){
        if(str[i] =='[ '){
            flag1++;
        }else if(str[i] == '<'){
            flag2++;
        }else if(str[i] == ']'){
            flag1--;
        }else if(str[i] == '>'){
            flag2--;
        }


        if(flag1 <0 || flag2 < 0)
            break;
    }


    if(flag1 == 0 && flag2 == 0)
        result = 1;


    return result;
}


int main(void){
    string line;
    int result;
    cin>>line;
    result = checkBracket(line);
    if(result == 1){
        printf("True");
    }else{
        printf("False");
    }
}


