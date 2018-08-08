#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));//time(0)返回的是格林尼治时间从1970年到此刻的秒数
    int number1 = rand()%10;
    int number2 = rand()%10;

    if (number2>number1)
    {
        int temp = 0;
        temp = number2;
        number2 = number1;
        number1 = temp;
    }

    cout<<number1<<" - "<<number2<<" = ";
    int answer;
    cin>>answer;
    if ((number1-number2)==answer)
    {
        cout<<"your answer is right"<<endl;
    }else
    {
        cout<<"your answer is wrong."<<"the right is :"
        <<number1<<" - "<<number2<<" = "<<(number1-number2)<<endl;
    }

    return 0;

}
