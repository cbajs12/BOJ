#include <iostream>
#include <memory.h>
#include <list>
#include <vector>
#include <queue>
using namespace std;
static int SIZE;

vector<list<int>> adjList;
vector<int> checkList;
vector<int> found;
vector<int> visited;
queue<int> qu;
int point, line;

void dfs(int start){
    found.push_back(start);
    checkList[start] = 1;
    list<int>::iterator iter;

    for(iter=adjList[start].begin(); iter != adjList[start].end(); ++iter){
        if(checkList[*iter] == 0){
            dfs(*iter);
        }
    }
}

void bfs(int start){
    qu.push(start);
    int temp;
    visited[start] = 1;
    list<int>::iterator iter;

    while(!qu.empty()){
        temp = qu.front();
        found.push_back(temp);
        qu.pop();
        for(iter=adjList[temp].begin(); iter != adjList[temp].end(); ++iter){
            if(visited[*iter] == 0) {
                visited[*iter] = 1;
                qu.push(*iter);
            }
        }
    }
}

int main(void) {
    int start;

    cin >> point;
    cin >> line;
    cin >> start;

    adjList = vector<list<int>>(1001);
    checkList = vector<int>(1001, 0);
    visited = vector<int>(1001, 0);

    int temp, temp2;
    for(int i=0; i<line; ++i){
        scanf("%d %d", &temp, &temp2);

        adjList[temp].push_back(temp2);
        adjList[temp2].push_back(temp);
    }

    for (int i = 1; i <= point; ++i) {
        adjList[i].sort();
    }

    dfs(start);

    bfs(start);

    for(int i=0; i<found.size(); ++i){
        printf("%d", found[i]);
        printf(" ");
        if(i==point-1)
            printf("\n");
    }
}