#include <iostream>
using namespace std;
class report
{
private:
    int i;
    int adno;
    char name[20];
    float marks[5];
    float total;
    float avg;
    float per;
    void getavg(float avg, float total, float per);

public:
    void readinfo();
    void displayinfo();
};
int report ::getavg(float avg, float total, float per)
{
    for (i = 0; i < 5; i++)
    {

        cout << "enter the marks:", << marks[i];
        cout << "Average: " << avg << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << per << endl;
    }
    total = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]);
    avg = total / 5;
    per = total * 100 / 5;
}

void report ::readinfo()
{
    cout << "Enter admission number: ";
    cin >> adno;
    cout << "Enter name: ";
    cin >> name;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject : ";
        cin >> marks[i];
    }
    // avg = getavg();
}
void report::displayinfo()
{
    cout << "Admission number: " << adno << endl;
    cout << "Name: " << name << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Marks of subject " << marks[i] << endl;
    }
    cout << "Average: " << avg << endl;
    cout << "Percentage: " << per << endl;
}
int main()
{
    report r1;
    r1.readinfo();
    r1.displayinfo();
    return 0;
}
