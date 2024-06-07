#include<iostream>
using namespace std;
class box
{
    int l,h,w;
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;
    }
    int getvolume()
    {
        return l*w*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l=l+n.l;
        t.w=w+n.w;
        t.h=h+n.h;
        return t;
    }

    box operator--(int)
    {
        box t;
        t.l=--l;
        t.w=--w;
        t.h=--h;
        return t;
    }  

};
int main()
{
    box a,b,c,d;
    a.setdata(2,2,2);
    b.setdata(3,3,3);
    cout<<"volume of A is : "<<a.getvolume()<<endl;
    cout<<"volume of B is : "<<b.getvolume()<<endl;
    c=a+b;
    cout<<"volume of C is : "<<c.getvolume()<<endl;
    d=c--;
    cout<<"volume of D is : "<<d.getvolume()<<endl;
    }