#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter a integer in number>=0,for example is 923:";
    int number ;
    cin>>number;

    if(number>=0)
    {
        int sum = 0;
        while(number>0)
        {
            sum +=number%10;
            number = number/10;
        }
        cout<<"the all number sum is :"<<sum<<endl;
    }else{
        cout << "Hello world!" << endl;
    }
    return 0;
}

