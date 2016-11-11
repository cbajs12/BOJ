#include <iostream>
#include <random>
using namespace std;
const int SIZE = 100;
int arr[SIZE];


int find1(int list[], int x){
    int index = -1;
    int count = 0;

    for(int i=0; i<10; ++i){
        if(x == list[i]){
            index = count;
        }

        ++count;
    }

    return index;
}

int find2(int list[], int x){
    int index = -1;
    // 처음 값과 중값을 이용하여 비교하고 이진 탐색


    return index;
}

int main(void){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int sp[10] = {7,8,9,10,1,2,3,4,5,6};

    printf("%d", find2(sp, 3));
}

/*

#include <random>
#include <iostream>

using namespace std;

const int SIZE = 100;
int arr[SIZE];

int SearchRecursive(int searchValue, int index, int step){
    if(index < 0 || index > SIZE - 1) return -1;

    int compare = arr[index];
    if(searchValue == compare) return index;

    int nextIndx = index;
    int term = SIZE / step;
    if(term < 1) term = 1;

    if(arr[0] > searchValue){
        // 찾아야 하는 값이 뒷 구역에 있다
        if(arr[0] > compare){
            // 지금 뒷구역을 탐색 중
            if(compare < searchValue){
                nextIndx += term;
                return SearchRecursive(searchValue, nextIndx, step * 2);
            }
            else{
                nextIndx -= term;
                return SearchRecursive(searchValue, nextIndx, step * 2);
            }
        }
        else{
            // 지금 앞구역을 탐색 중
            // 무조건 뒤를 봐야한다
            nextIndx += term;
            return SearchRecursive(searchValue, nextIndx, step * 2);
        }

    }
    else{
        // 찾아야 하는 값이 앞 구역에 있다
        if(arr[0] > compare) {
            // 지금 뒷구역을 탐색 중
            // 무조건 앞 구역을 봐야한다
            nextIndx -= term;
            return SearchRecursive(searchValue, nextIndx, step * 2);

        }
        else{
            // 지금 앞구역으 탐색 중
            if(compare < searchValue){
                nextIndx += term;
                return SearchRecursive(searchValue, nextIndx, step * 2);
            }
            else{
                nextIndx -= term;
                return SearchRecursive(searchValue, nextIndx, step * 2);
            }
        }
    }
}

int SearchStart(int searchValue){
    int index = 0;
    int midIndx = (sizeof(arr) / sizeof(int)) / 2;

    if(arr[midIndx] == searchValue) {
        return index;
    }
    else{
        return SearchRecursive(searchValue, midIndx, 4);
    }
}

void Search(int searchValue){
    int result = SearchStart(searchValue);

    if(result == -1) cout << "탐색 결과가 없습니다" << endl;
    else cout << (result+1) << "번째에 존재" << endl;
}



int main(){
    int temp[SIZE];

    int randIndx = rand() % SIZE;
    for(int i = 0; i < SIZE; i++){
        temp[i] = i;
    }

    memcpy(arr + (SIZE - randIndx), temp, sizeof(int) * randIndx);

    memcpy(arr, temp + randIndx, sizeof(int) * (SIZE - randIndx));

    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    Search(1);
    Search(5);
    Search(10);
    Search(23);
    Search(44);
    Search(53);
    Search(65);
    Search(78);
    Search(99);

    return 1;
}
*/
