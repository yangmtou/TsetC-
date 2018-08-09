#include <iostream>
#include "TestCircle.h"

using namespace std;
class A
{
public:
    TestCircle cc;
    int i;
};
int main()
{
    //TestCircle c1;
    //TestCircle c2(5.0);
    //c1 = c2;

    //cout<<"c1 "<<c1.getArea()<<endl;
    //cout<<"c2 "<<c2.getArea()<<endl;


    A a;
    cout<<a.cc.getArea()<<endl;
    cout<<a.i<<endl;


    return 0;
}


