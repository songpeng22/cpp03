#include "main.h"
#include "QMainApp.h"
#include <iostream>
using namespace std;

class time
{
public:
    time(int h,int m,int s):hour(h),minute(m),second(s) {}
    void show();
    int hour,minute,second;
};

void time::show()
{
 //   cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main()
{
    time t1(12,5,34);     
    t1.show();   

    //find the variants in memory
    int *p0_1 = &t1.hour;
    int *p0_2 = &t1.minute;
    int *p0_3 = &t1.second;
    time *p2=&t1;
    //end of find the variants in memory

    //
    p2->show();
    void (time::*p3)();
    p3=&time::show;
    (t1.*p3)();
    //
    QMainApp::Instance()->OnInit();

    return 0;
}
