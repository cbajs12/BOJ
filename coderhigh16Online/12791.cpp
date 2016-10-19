#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void){
    int cases;

    multimap<int, string> m;

    m.insert(make_pair(1967, "DavidBowie"));
    m.insert(make_pair(1969, "SpaceOddity"));
    m.insert(make_pair(1970, "TheManWhoSoldTheWorld"));
    m.insert(make_pair(1971, "HunkyDory"));
    m.insert(make_pair(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"));
    m.insert(make_pair(1973, "AladdinSane"));
    m.insert(make_pair(1973, "PinUps"));
    m.insert(make_pair(1974, "DiamondDogs"));
    m.insert(make_pair(1975, "YoungAmericans"));
    m.insert(make_pair(1976, "StationToStation"));
    m.insert(make_pair(1977, "Low"));
    m.insert(make_pair(1977, "Heroes"));
    m.insert(make_pair(1979, "Lodger"));
    m.insert(make_pair(1980, "ScaryMonstersAndSuperCreeps"));
    m.insert(make_pair(1983, "LetsDance"));
    m.insert(make_pair(1984, "Tonight"));
    m.insert(make_pair(1987, "NeverLetMeDown"));
    m.insert(make_pair(1993, "BlackTieWhiteNoise"));
    m.insert(make_pair(1995, "1.Outside"));
    m.insert(make_pair(1997, "Earthling"));
    m.insert(make_pair(1999, "Hours"));
    m.insert(make_pair(2002, "Heathen"));
    m.insert(make_pair(2003, "Reality"));
    m.insert(make_pair(2013, "TheNextDay"));
    m.insert(make_pair(2016, "BlackStar"));

    cin>>cases;


    int from, to;
    for(int i=0; i<cases; ++i){
        scanf("%d %d", &from, &to);

        string str="";

        int count=0;


        for(auto j=from; j<=to; ++j){
            auto val = m.equal_range(j);

            string temp;
            for(auto begin=val.first; begin != val.second; ++begin){
                temp = to_string(begin->first);
                str += temp+" "+begin->second+"\n";
                count++;
            }
        }

        cout<<count<<"\n"<<str;
    }

    return 0;
}
