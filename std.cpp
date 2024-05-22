#include <iostream>
using namespace std;
struct student
{
    int num, total, marks;
    int sub[3];
    char name[50];
    float per;
};
struct student a[3];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "enter student num :";
        cin >> a[i].num;
        cout << "enter student name :";
        cin >> a[i].name;

        for (int j = 0; j < 3; j++)
        {
            cout << "enter the marks :";
            cin >> a[i].sub[j];
            a[i].total = a[i].total + a[i].sub[j];
        }
        a[i].per = a[i].total / 3;
        cout << "num : " << a[i].num;
        cout << "name : " << a[i].name;
        cout << "total : " << a[i].total;
        cout << "per : " << a[i].per;
        cout << endl;
    }
}