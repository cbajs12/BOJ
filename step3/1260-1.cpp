#include <iostream>
#include <string>
#include <memory.h>
using namespace std;
static int SIZE;

struct Node{
    int data;
    Node* pre;
    Node* next;
    int isEmpty;
    int size;
};

void initQueue(Node* front, Node* tail){
    front->data = 0;
    front->isEmpty = 1;
    front->size = 0;
    front->pre = nullptr;

    tail->data = 0;
    tail->isEmpty = 1;
    tail->size = 0;
    tail->next = nullptr;

    front->next = tail;
    tail->pre = front;
}

void push(Node* front, Node* tail, int data){
    Node* node = (Node*)malloc(sizeof(Node));
    if(tail->pre == front){
        node->data = data;
        node->pre = front;
        node->next = tail;

        front->next = node;
        tail->pre = node;

        front->isEmpty = 0;
        front->size +=1;
        return;
    }

    node->data = data;
    node->next = tail;
    node->pre = tail->pre;
    node->pre->next = node;
    tail->pre = node;
    front->size += 1;
}

int pop(Node* front, Node* tail){
    if(front->next == tail){
        return -1;
    }

    Node* temp = (Node*)malloc(sizeof(Node));
    temp = front->next;

    if(temp->next == tail){
        front->isEmpty=1;
    }

    temp->next->pre = front;
    front->next = temp->next;
    front->size -= 1;

    int data = temp->data;

    free(temp);
    return data;
}

int empty(Node* front){
    if(front->isEmpty == 1)
        return 1;

    return 0;
}

int front(Node* front, Node* tail){
    if(front->next == tail)
        return -1;

    return front->next->data;
}

int back(Node* front, Node* tail){
    if(tail->pre == front)
        return -1;

    return tail->pre->data;
}

int get(Node* front, Node* tail, int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node = front;
    while(node->next != tail){
        if(node->data == data){
            return data;
        }
        node = node->next;
    }

    return -1;
}

int size(Node* front){
    return front->size;
}

void dfs(Node* header, Node* tail, int point, int start, int** matrix){
    int i = start-1;
    push(header, tail, start);
    while(size(header) < point){
        for(int j=0; j<point; ++j){
//            printf("%d\n", matrix[i][j]);
            if(matrix[i][j] == 1){
//                printf("%d\n", get(header, tail, j+1));
                if(get(header, tail, j+1) == -1){
                    matrix[i][j] = 0;
                    matrix[j][i] = 0;
//                    printf("hu\n");
                    push(header, tail, j+1);
                    i = j;
                    break;
                }
            }
        }
    }
}

void bfs(Node* header, Node* tail, int point, int start, int** matrix){
    int i = start-1;
    push(header, tail, start);
    while(size(header) < point){
        for(int j=0; j<point; ++j){
//            printf("%d\n", matrix[i][j]);
            if(matrix[i][j] == 1){
//                printf("%d\n", get(header, tail, j+1));
                if(get(header, tail, j+1) == -1){
                    matrix[i][j] = 0;
                    matrix[j][i] = 0;
//                    printf("hu\n");
                    push(header, tail, j+1);
//                    i = j;
//                    break;
                }
            }
        }
        ++i;
    }
}

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

    Node *header = (Node *) malloc(sizeof(Node));
    Node *tail = (Node *) malloc(sizeof(Node));
    initQueue(header, tail);

    dfs(header, tail, point, start, matrix);

    while(size(header) > 0){
        printf("%d ", pop(header, tail));
    }
    printf("\n");

    free(header);
    free(tail);

    Node *head = (Node *) malloc(sizeof(Node));
    Node *end = (Node *) malloc(sizeof(Node));
    initQueue(head, end);

    bfs(head, end, point, start, matrix2);

    while(size(head) > 0){
        printf("%d ", pop(head, end));
    }

    free(head);
    free(end);
}

