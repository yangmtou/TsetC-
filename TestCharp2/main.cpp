#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
    double width(2.5);
    double height(1.0);
    //cin>>width>>height;
    cout <<"width*height:"<< width*height << endl;
    const double PI = 3.14;//ÉùÃ÷³£Á¿
    cout<<sizeof(short)<<endl;
    cout<<sizeof(unsigned short)<<endl;
    cout<<sizeof(int signed)<<endl;
    cout<<sizeof(unsigned)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(unsigned long)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long double)<<endl;
    cout<<5.0534e+1<<endl;


    cout<<"INI_MIN"<<INT_MIN<<endl;
    cout<<"pow(2,3):"<<pow(2,3)<<endl;

    int m= 2;
    int r = 3;

    double result = m * pow(3,2);
    cout<<"the result is :"<<result<<sizeof(result)<<endl;

    double pow_result = pow(2,3.5);
    cout<<"the pow_result is :"<<pow_result<<endl;
    return 0;
}
