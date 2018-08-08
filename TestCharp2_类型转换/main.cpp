#include <iostream>

using namespace std;

int main()
{
    //注意下面的区别
    cout<<static_cast<double>(1)/2<<endl;
    cout<<1/2<<endl;

    //静态转换也叫做c类型转换
    int i = (int) 5.4;
    cout<<i<<endl;


    cout << "Hello world!" << endl;
    return 0;
}
