#include<iostream>
using namespace std;
class test
{
    public:
    static int a;
    test()
    {
        cout<<"test class called..."<<endl;
        a++;
    }

static int hello()
{
    return a;
}
};
int test :: a=10;
int main()
{
    cout<<"inital stage:"<<test::hello()<<endl;
    test t,a,s,d,f;
    cout<<"inital stage:"<<test::hello()<<endl;
}