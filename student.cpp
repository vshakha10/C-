#include <iostream>
using namespace std;
class students
{
private:
    int admono;
    int eng, math, sci;
    float total;
    char sname[20];
    float ctotal(float eng, float math, float sci);

public:
    void takedata();
    void showdata();
    float ctotal()
    {
        return (eng + math + sci) / 3;
    }
};

void students::takedata()
{
    cout << " enter students admno : ";
    cin >> admono;
    cout << " \nenter students sname : ";
    cin >> sname;
    cout << " \nenter students eng marks : ";
    cin >> eng;
    cout << " \nenter students math marks : ";
    cin >> math;
    cout << " \nenter students sci marks : ";
    cin >> sci;
}

float students ::ctotal(float eng, float math, float sci)
{

    total = eng + math + sci;
    return total;
}

void students::showdata()
{
    cout << "\n admission no : " << admono;
    cout << "\n student name : " << sname;
    cout << "\n eng marks : " << eng;
    cout << "\n math marks : " << math;
    cout << "\n sci marks : " << sci;
    cout << "\n ctotal marks : " << ctotal(eng, math, sci);
}
int main()
{
    class students st1;
    st1.takedata();
    st1.showdata();
}