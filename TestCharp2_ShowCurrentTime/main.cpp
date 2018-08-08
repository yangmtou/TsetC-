#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int totalSeconds = time(0);
    int currentSeconds = totalSeconds%60;//获取的是当前的秒数
    int totalMinutes = totalSeconds / 60;
    int currentMinutes = totalMinutes%60;//获取的是当前的分钟
    int totalHours = totalMinutes/60;
    int currentHours = totalHours % 24;

    cout << "current time is :"<<currentHours+8<<":"<<currentMinutes<<":"<<currentSeconds << endl;
    return 0;
}
