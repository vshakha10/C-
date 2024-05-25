#include <iostream>
using namespace std;
class test
{
private:
    int testcode;
    char discription[10];
    int nocandidate;
    int centerreqd;

    int calcntr( int nocandidate);

public:
    void shedule();
    void disptest();
};
int test :: calcntr(int nocandidate)
{
int   centerreqd = nocandidate / 100 + 1;
    return centerreqd;
}
void test::shedule()
{
    cout << "Enter the test code: ";
    cin >> testcode;
    cout << "Enter the discription: ";
    cin >> discription;
    cout << "Enter the no of candidate: ";
    cin >> nocandidate;
    
}

void test::disptest()
{
    cout << "Test code: " << testcode << endl;
    cout << "Discription: " << discription << endl;
    cout << "No of candidate: " << nocandidate << endl;
    cout << "Center required: " << calcntr(nocandidate) << endl;
}
int main()
{
    test t1;
    t1.shedule();
    t1.disptest();
    return 0;
}