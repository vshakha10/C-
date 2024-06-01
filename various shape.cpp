//  Area of various shapes
#include <iostream>
using namespace std;
class area
{
     public:
    area(int a)
    {
        cout << "area of square=" << a * a << endl;
    }
    area(double a)
    {
        cout << "area of circle=" << 3.14 * a * a << endl;
    }
    area(int a, int b)
    {
        cout << "area of rectangle=" << a * b << endl;
    }
    area(double a, int h)
    {
        cout << "volume of cylinder=" << (2 * 3.14 * a * h) + (2 * 3.14 * a * a) << endl;
    }
};
int main()
{
    area a(5), b(2.5), c(5, 4), d(5.3, 10);
}
