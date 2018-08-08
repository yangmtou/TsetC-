#include <iostream>

using namespace std;

int main()
{
	cout << "enter a number:";
	int number;
	cin >> number;
	if (number%5==0)
	{
		cout << "HiFive" << endl;
	}
	if (number % 2 ==0)
	{
		cout << "HiEven" << endl;
	}
	cout << "请敲击0按键，然后按回车退出"<<endl;
	int hh;
	cin >> hh;
	
	return 0;
}