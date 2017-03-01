#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t, d, m, y, td, tm, ty, bd, bm, by;
    string name, tname, bname;

    cin>>t;

    if(t<1 || t>100)
        return 0;

    cin>>name>>d>>m>>y;

    bname = name;
    bd = d;
    bm = m;
    by = y;

    for(int i=1; i<t; ++i){
        cin>>tname>>td>>tm>>ty;

        if(ty >= by){
            if(ty > by){
                by = ty;
                bm = tm;
                bd = td;
                bname = tname;
                continue;
            }else if(tm >= bm){
                if(tm > bm){
                    by = ty;
                    bm = tm;
                    bd = td;
                    bname = tname;
                    continue;
                }else if(td >= bd){
                    if(td > bd){
                        by = ty;
                        bm = tm;
                        bd = td;
                        bname = tname;
                        continue;
                    }
                }
            }
        }

        if(ty <= y){
            if(ty < y){
                y = ty;
                m = tm;
                d = td;
                name = tname;
                continue;
            }else if(tm <= m){
                if(tm < m){
                    y = ty;
                    m = tm;
                    d = td;
                    name = tname;
                    continue;
                }else if(td <= d){
                    if(td < d){
                        y = ty;
                        m = tm;
                        d = td;
                        name = tname;
                        continue;
                    }
                }
            }
        }
    }

    cout<<bname<<endl;
    cout<<name;
}
