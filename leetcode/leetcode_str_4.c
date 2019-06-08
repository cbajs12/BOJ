
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int row = matrixSize / *matrixColSize;
    int col = *matrixColSize;
    int *returnSize = matrixSize;
    int returnArry = (int *)malloc(*returnSize*(sizeof(int)));
    int cnt = 0;
    int least = 0;

    if(row > col){
        least = col;
    }else{
        least = row;
    }

//    for(int i =0; i < row; ++i){
//        for(int j= 0; j<col; ++j){
//            if(i == 0 && j==0) {
//                returnArry[0] = matrix[i][j];
//                cnt++;
//            }else if(i == row-1 && j == col-1 ){
//                returnArry[*returnSize-1] = matrix[i][j];
//                cnt++;
//            }else{
//                if(i+j)
//            }
//        }
//    }

    while(cnt < matrixSize){

    }
}


