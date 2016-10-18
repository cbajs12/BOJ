#include <iostream>
#include <string>
#include <memory.h>
#include <queue>
using namespace std;
static int SIZE;

struct Vertax{
    int data;
    int visited;
};


//void dfs(Node* header, Node* tail, int point, int start, int** matrix){
//    int i = start-1;
//    push(header, tail, start);
//    while(size(header) < point){
//        for(int j=0; j<point; ++j){
////            printf("%d\n", matrix[i][j]);
//            if(matrix[i][j] == 1){
////                printf("%d\n", get(header, tail, j+1));
//                if(get(header, tail, j+1) == -1){
//                    matrix[i][j] = 0;
//                    matrix[j][i] = 0;
////                    printf("hu\n");
//                    push(header, tail, j+1);
//                    i = j;
//                    break;
//                }
//            }
//        }
//    }
//}
//
//void bfs(Node* header, Node* tail, int point, int start, int** matrix){
//    int i = start-1;
//    push(header, tail, start);
//    while(size(header) < point){
//        for(int j=0; j<point; ++j){
////            printf("%d\n", matrix[i][j]);
//            if(matrix[i][j] == 1){
////                printf("%d\n", get(header, tail, j+1));
//                if(get(header, tail, j+1) == -1){
//                    matrix[i][j] = 0;
//                    matrix[j][i] = 0;
////                    printf("hu\n");
//                    push(header, tail, j+1);
////                    i = j;
////                    break;
//                }
//            }
//        }
//        ++i;
//    }
//}

int main(void){
    int point, line, start;

    cin>>point;
    cin>>line;
    cin>>start;

    int num1, num2;
    SIZE = point;
    int **matrix=(int **)malloc(point*sizeof(int*));

    for(int i=0;i<point;i++){
        matrix[i]=(int *)malloc(point*sizeof(int));
        memset(matrix[i], 0, sizeof(int)*point);
    }

    for(int i=0; i<line; ++i){
        scanf("%d %d", &num1, &num2);
        matrix[num1-1][num2-1] = 1;
        matrix[num2-1][num1-1] = 1;
    }

    int **matrix2=(int **)malloc(point*sizeof(int*));

    for(int i=0;i<point;i++){
        matrix2[i]=(int *)malloc(point*sizeof(int));
        memset(matrix2[i], 0, sizeof(int)*point);
    }

    for(int i=0; i<point; ++i){
        for(int j=0; j<point ; ++j)
            matrix2[i][j] = matrix[i][j];
    }

//    Node *header = (Node *) malloc(sizeof(Node));
//    Node *tail = (Node *) malloc(sizeof(Node));
//    initQueue(header, tail);
//
//    dfs(header, tail, point, start, matrix);
//
//    while(size(header) > 0){
//        printf("%d ", pop(header, tail));
//    }
//    printf("\n");
//
//    free(header);
//    free(tail);
//
//    Node *head = (Node *) malloc(sizeof(Node));
//    Node *end = (Node *) malloc(sizeof(Node));
//    initQueue(head, end);
//
//    bfs(head, end, point, start, matrix2);
//
//    while(size(head) > 0){
//        printf("%d ", pop(head, end));
//    }

//    free(head);
//    free(end);
}