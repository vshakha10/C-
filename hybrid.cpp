#include<iostream>
using namespace std;
class base 
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a : ";
        cin>>a;
    }
};
class ABC : public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"enter b : ";
        cin>>b;
    }
};
class XYZ 
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"enter c : ";
        cin>>c;
    }
};
class derived : public ABC , public XYZ
{
    public:
    void product()
    {
        cout<<"product of a,b and c is : "<<a*b*c<<endl;
    }
};
int main()
{
    derived d;
    d.setA();
    d.setB();
    d.setC();
    d.product();
}