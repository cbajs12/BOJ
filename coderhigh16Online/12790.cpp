#include <iostream>
using namespace std;

int main(void){
    int cases;

    cin>>cases;

    int hp, mp, atx, dfs;
    int hpf, mpf, atxf, dfsf;
    int power;
    for(int i=0; i<cases; ++i){
        scanf("%d %d %d %d %d %d %d %d", &hp, &mp, &atx, &dfs, &hpf, &mpf, &atxf, &dfsf);

        hp += hpf;
        mp += mpf;
        atx += atxf;
        dfs += dfsf;

        if(hp < 1)
            hp=1;

        if(mp < 1)
            mp=1;

        if(atx < 0)
            atx=0;

        power = 1*hp + 5*mp + 2*atx + 2*dfs;
        printf("%d\n", power);
    }
}