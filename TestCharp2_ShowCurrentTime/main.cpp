#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int totalSeconds = time(0);
    int currentSeconds = totalSeconds%60;//��ȡ���ǵ�ǰ������
    int totalMinutes = totalSeconds / 60;
    int currentMinutes = totalMinutes%60;//��ȡ���ǵ�ǰ�ķ���
    int totalHours = totalMinutes/60;
    int currentHours = totalHours % 24;

    cout << "current time is :"<<currentHours+8<<":"<<currentMinutes<<":"<<currentSeconds << endl;
    return 0;
}
