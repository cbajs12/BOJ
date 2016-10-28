#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str1, str2;

    cin>>str1;
    cin>>str2;

    int len = (int)str1.length();
    int count = 0;
    char temp;
    if(str1 == str2){
        printf("0");
    }else if(str1.length() != str2.length()){
        printf("-1");
    }else if(str1[0] != str2[0] || str1[len-1] != str2[len-1]){
        printf("-1");
    }else{
        for(int i=1; i<len-1; ++i){
            if(str1[i] != str2[i]){
                for(int j=i+1; j<len-1; ++j){
                    if(str1[i] != str1[j]){
                        temp = str1[j];
                        str1[j] = str1[i];
                        str1[i] = temp;

                        count+=j-i;
                        break;
                    }
                }
            }

        }

        printf("%d", count);
    }

    return 0;
}
