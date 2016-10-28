#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

vector<list<string>> v;
list<string> arr1;
list<string> arr2;
list<string> arr3;
int leng;

void enqueue(string data, int seq){
    if(seq%3 == 1){
        v[0].push_back(data);
    }else if(seq%3 == 2){
        v[1].push_back(data);
    }else{
        v[2].push_back(data);
    }
}

string dequeue(int count) {
    if(count<=leng){
        string temp;
        if (count % 3 == 1) {
            temp = v[0].front();
            v[0].pop_front();
            cout<<temp<<endl;
            return temp;
        } else if (count % 3 == 2) {
            temp = v[1].front();
            v[1].pop_front();
            cout<<temp<<endl;
            return temp;
        } else if (count % 3 == 0) {
            temp = v[2].front();
            v[2].pop_front();
            cout<<temp<<endl;
            return temp;
        }
    }

    return "null";
}

int main(void){
    v.push_back(arr1);
    v.push_back(arr2);
    v.push_back(arr3);

    int num;

    cin>>num;

    vector<string> v1;
    leng = num;
    vector<string> v2;

    string tmp;
    for(int i=0; i<num; ++i){
        cin>>tmp;
        v1.push_back(tmp);
        enqueue(tmp, i+1);
    }

    for(int i=0; i<num; ++i){
        string result = dequeue(i+1);
        if(result.compare("null") == 0){
            printf("End\n");
            break;
        }

        if((i+1)%3 == 1){
            v2.push_back("[arr1, " + result + "]");
        }else if((i+1)%3 == 2){
            v2.push_back("[arr2, " + result + "]");
        }else{
            v2.push_back("[arr3, " + result + "]");
        }
    }

    for(int i=0; i<v2.size(); ++i)
        cout<<v2[i]<<endl;

    return 0;
}

