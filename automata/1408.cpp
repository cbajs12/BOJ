#include <iostream>
#include <string>
using namespace std;

int strToint(string str){
    int flag=0, h=0, m=0, s=0;

    for(int i=0; i<str.length(); ++i){
        if(str[i] == ':'){
            flag=0;
            continue;
        }

        if(i < 2){
            if(str[i] == '0' && flag == 0 && i == 0){
                flag++;
            }else if(flag == 0 && i == 0){
                h = 10*(str[i] - '0');
                flag++;
            }else{
                h += (str[i] - '0');
            }
        }else if(i>2 && i<5){
            if(str[i] == '0' && flag == 0 && i == 3){
                flag++;
            }else if(flag == 0 && i == 3){
                m = 10*(str[i] - '0');
                flag++;
            }else{
                m += (str[i] - '0');
            }
        }else{
            if(str[i] == '0' && flag == 0 && i == 6){
                flag++;
            }else if(flag == 0 && i == 6){
                s = 10*(str[i] - '0');
                flag++;
            }else{
                s += (str[i] - '0');
            }
        }
    }
//    printf("%d %d %d",h, m, s);

    return h*60*60 + m*60 + s;
}

int main(void) {
    string time, start, result;
    int t, s, d, r, m, p;
    char c;

    cin>>time;
    cin>>start;

    t = strToint(time);
    s = strToint(start);
    d = 24*60*60;

    if(t > s){
        r = d - t +s;
    }else{
        r = s - t;
    }

//    printf("%d\n", r);

    if(r/(60*60) == 0){
        r %= 60*60;
        result += '0';
        result += '0';
    }else{
        m = r/(60*60);
        r %= 60*60;

        if(m/10 != 0){
            result += '0' + (m/10);
            result += '0' + (m%10);
        }else{
            result += '0';
            result += '0' + (m%10);
        }
    }
    result += ':';
    if(r/60 == 0){
        r %= 60;
        result += '0';
        result += '0';
    }else{
        m = r/60;
        r %= 60;

        if(m/10 != 0){
            result += '0' + (m/10);
            result += '0' + (m%10);
        }else{
            result += '0';
            result += '0' + (m%10);
        }
    }
    result += ':';
    if(r/10 != 0){
        result += '0' + (r/10);
        result += '0' + (r%10);
    }else{
        result += '0';
        result += '0' + (r%10);
    }

    cout<<result;
}

