#include <iostream>
#include <string>
#include <memory.h>
using namespace std;

struct Node{
    int data;
    Node* pre;
    Node* next;
    int isEmpty;
    int size;
};

void initDeque(Node* front, Node* tail){
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

void push_front(Node* front, Node* tail, int data){
    Node* node = (Node*)malloc(sizeof(Node));
    if(front->next == tail){
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
    node->pre = front;
    node->next = front->next;
    front->next->pre = node;
    front->next = node;

    front->size += 1;
}

void push_back(Node* front, Node* tail, int data){
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
    node->next = tail;

    tail->pre->next = node;
    tail->pre = node;
    front->size += 1;
}

int pop_front(Node* front, Node* tail){
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

int pop_back(Node* front, Node* tail){
    if(tail->pre == front){
        return -1;
    }

    Node* temp = (Node*)malloc(sizeof(Node));
    temp = tail->pre;

    if(temp->pre == front){
        front->isEmpty=1;
    }

    temp->pre->next = tail;
    tail->pre = temp->pre;
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

int size(Node* front){
    return front->size;
}

int main(void) {
    int num;

    cin >> num;

    Node *header = (Node *) malloc(sizeof(Node));
    Node *tail = (Node *) malloc(sizeof(Node));
    initDeque(header, tail);
    string command;
    int data;
    int nums[num];

    for (int i = 0; i < num; ++i) {
        cin >> command;
        if (command.compare("push_front") == 0) {
            scanf("%d", &data);
            push_front(header, tail, data);
            nums[i] = -2;
        }else if(command.compare("push_back") == 0){
            scanf("%d", &data);
            push_back(header, tail, data);
            nums[i] = -2;
        }else if (command.compare("pop_front") == 0) {
            nums[i] = pop_front(header, tail);
//            printf("%d\n", pop(header));
        } else if (command.compare("pop_back") == 0) {
            nums[i] = pop_back(header, tail);
//            printf("%d\n", pop(header));
        }else if (command.compare("size") == 0) {
            nums[i] = size(header);
//            printf("%d\n", size(header));
        } else if (command.compare("empty") == 0) {
            nums[i] = empty(header);
//            printf("%d\n", empty(header));
        } else if (command.compare("front") == 0){
            nums[i] = front(header, tail);
//            printf("%d\n", top(header));
        }else if (command.compare("back") == 0){
            nums[i] = back(header, tail);
        }else{
            nums[i] = -2;
        }
    }

    for(int i=0; i<num; ++i){
        if(nums[i] != -2)
            printf("%d\n", nums[i]);
    }

    free(header);
    free(tail);
}

