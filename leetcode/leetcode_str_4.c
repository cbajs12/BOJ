#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int* findDiagonalOrder(int** matrix, int matrixRowSize, int matrixColSize, int* returnSize){
    int row = matrixRowSize;
    int col = matrixColSize;
    *returnSize = matrixRowSize * matrixColSize;
    int* returnArry = (int *)malloc(*returnSize*(sizeof(int)));
    int cnt = 0;
    int start = 0;

    int chunk = col + row - 1;


    for(int i = 0; i <= chunk; ++i){
        if(i % 2 == 0){
            start = i;

            if(start > matrixRowSize - 1){
                start = matrixRowSize - 1;
            }

            for(int j = start; (j >= 0) && (i-j < matrixColSize); j--){
                returnArry[cnt++] = matrix[j][i-j];
                //cnt++;
            }
        }else{
            start = i;

            if(start > matrixColSize - 1){
                start = matrixColSize - 1;
            }

            for(int j = start; (j >= 0) && (i-j < matrixRowSize); j--){
                returnArry[cnt++] = matrix[i-j][j];
                //cnt++;
            }
        }
    }
    return returnArry;
}


