#include <iostream>

using namespace std;
class Circle
{
public:
    double radius;

    Circle()
    {
        radius=1;
    }
    Circle(double newRadius)
    {
        radius = newRadius;
    }
    double getArea()
    {
        return radius * radius * 3.14;
    }
};
int main()
{
    Circle circle1(1.0);
    Circle circle2(3.0);

    cout<<"circle1"<<circle1.getArea()<<endl;
    cout<<"circle2"<<circle2.getArea()<<endl;

    Circle c ;
    cout<<"c "<<c.getArea()<<endl;

    Circle c1 = Circle();
    Circle c2 = Circle(4.0);

    cout<<"the area is :"<<Circle().getArea()<<endl;
    cout<<"the area is :"<<Circle(6).getArea()<<endl;
    return 0;
}




