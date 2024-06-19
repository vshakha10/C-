#include<iostream>
using namespace std;
class test
{
    public:
    static int a;
    test()
    {
        cout<<"test class called...."<<endl;
        a++;
    }
};
int test :: a=12;
int main()
{
    cout<<"inital stage : "<<test::a<<endl;
    test t,a,s,d,f;
    cout<<"final stage : "<<test::a<<endl;
}