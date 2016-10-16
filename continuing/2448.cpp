#include <iostream>
#include <cmath>
using namespace std;
void printStar(int column, int row, int k);

int main(void) {
    int num1;
    int k, temp;
    int triangle, baseStars, spaces, check;

    cin>>num1;
    temp = num1/3;
    k = (int)log2(temp);
    temp = (int)(3*pow(2,k));

    if(k > 10 || k < 0)
        return 0;
    if(num1 != temp)
        return 0;

    triangle = k+1;


//    if(k == 0){
//        printStar();
//        return 0;
//    }

    temp = (int)pow(2,k);
    baseStars = temp * 5 + (temp - 1);

    printStar(baseStars, num1, k);

}

void printStar(int column, int row, int k){
    char map[row][column];
    int count, mid, term, start, end;
    int limit, t;

    for(int i=0; i<row; ++i)
        for(int j=0; j<column; ++j)
            map[i][j] = ' ';


    count = 0;
    mid = 0;
    term = 1;
    start = 0;
    end=column;
    t = 1;
    limit = (int)pow(2,t);

    for(int i=row-1; i>=0; --i){
//        printf("%d\n", k);
//        printf("%d\n", t);
        if(k < t)
            break;

        if(term >= limit){
            t++;
            limit = (int)pow(2,t);
        }

        count++;
        mid++;

        int base = start;

        int j=0;
        int k=0;
        while(j<end){
            if(mid==1){
                if(k==5){
                    map[i][j]=' ';
                }
                map[i][j]='*';
                ++k;
            }else if(mid==2){

            }else{

            }
            ++j;
        }

        if(mid==3)
            mid=0;

        start++;
        term+=2;
        end--;
    }

    for(int i=0; i<row; ++i){
        for(int j=0; j<column; ++j)
            printf("%c", map[i][j]);

        printf("\n");
    }

}
