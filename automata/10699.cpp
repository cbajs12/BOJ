#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(void){
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
//    char* dt = ctime(&now);
//
//    cout << "The local date and time is: " << dt << endl;

    // convert now to tm struct for UTC
//    tm *gmtm = gmtime(&now);
//    dt = asctime(gmtm);
//    cout << "The UTC date and time is:"<< dt << endl;

    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);

    strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);

    std::cout << buf << std::endl;
}