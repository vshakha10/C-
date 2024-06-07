#include<iostream>
using namespace std;
class box
{
    int l,h,w;
    friend box add(box,box);
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;
    }
    int getvolume()
    {
        return l*w*h;
    }
    
};
box add(box a,box b)
    {
        box t;
        t.l=a.l+b.l;
        t.w=a.w+b.w;
        t.h=a.h+b.h;
        return t;
    }
int main()
{
    box a,b,c;
    a.setdata(5,5,5);
    b.setdata(2,2,2);
    cout<<"volume of A is : "<<a.getvolume()<<endl;
    cout<<"volume of B is : "<<b.getvolume()<<endl;
    c=add(a,b);
    cout<<"volume of C is : "<<c.getvolume()<<endl;
}