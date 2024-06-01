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
    
};
int main()
{
    area a(8), b(3.2), c(3, 4);
}
