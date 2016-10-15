#include <iostream>
#include <string>
#include <memory.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    int isEmpty;
    int count;
};

void initStack(Node* header){
    header->data = 0;
    header->next = nullptr;
    header->isEmpty = 1;
    header->count = 0;
}

void push(Node* header, int data){
    Node* node = (Node*)malloc(sizeof(Node));
    if(header->next == nullptr){
        node->data = data;
        node->next = nullptr;
        header->next = node;
        header->isEmpty = 0;
        header->count +=1;
        return;
    }
    node->data = data;
    node->next = header->next;
    header->next = node;
    header->count += 1;
}

int pop(Node* header){
    if(header->next == nullptr){
        return -1;
    }

    Node* temp = (Node*)malloc(sizeof(Node));
    temp = header->next;

    if(temp->next == nullptr){
        header->isEmpty=1;
    }
    header->next = temp->next;
    header->count -= 1;
    int data = temp->data;
    free(temp);
    return data;
}

int empty(Node* header){
    if(header->isEmpty == 1)
        return 1;

    return 0;
}

int top(Node* header){
    if(header->next == nullptr)
        return -1;

    return header->next->data;
}

int size(Node* header){
    return header->count;
}

int main(void) {
    int num;

    cin >> num;

    Node *header = (Node *) malloc(sizeof(Node));
    initStack(header);

    string command;
    int data;
    int nums[num];

    for (int i = 0; i < num; ++i) {
        cin >> command;
        if (command.compare("push") == 0) {
            scanf("%d", &data);
            push(header, data);
            nums[i] = -2;
        } else if (command.compare("pop") == 0) {
            nums[i] = pop(header);
//            printf("%d\n", pop(header));
        } else if (command.compare("size") == 0) {
            nums[i] = size(header);
//            printf("%d\n", size(header));
        } else if (command.compare("empty") == 0) {
            nums[i] = empty(header);
//            printf("%d\n", empty(header));
        } else if (command.compare("top") == 0){
            nums[i] = top(header);
//            printf("%d\n", top(header));
        }else{
            nums[i] = -2;
        }
    }

    for(int i=0; i<num; ++i){
        if(nums[i] != -2)
            printf("%d\n", nums[i]);
    }

    free(header);
}

