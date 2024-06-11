#include<iostream>
using namespace std;
class base
{
    int a;  //private:
    protected:
    int b;
    public:
    int c;
};
class derived : public base //protected //private
{
    public:
    void hello()
    {
        base::b=15;
        base::c=11;
        cout<<"value of c is : "<<c<<endl;
        cout<<"value of b is : "<<b<<endl;
        cout<<"hello"<<endl;
    }
};
int main()
{
    derived d;
    //d.c=10;
    //cout<<"value of c is : "<<d.c<<endl;
    d.hello();
}